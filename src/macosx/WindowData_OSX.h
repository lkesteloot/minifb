#pragma once

#include <MiniFB_enums.h>
#include <WindowData.h>

#if defined(USE_METAL_API)
#include <MetalKit/MetalKit.h>
#endif

@class OSXWindow;

typedef struct {
    OSXWindow           *window;
    struct mfb_timer    *timer;
    
#if defined(USE_METAL_API)
        struct {
            id<MTLCommandQueue>         command_queue;
            id<MTLRenderPipelineState>  pipeline_state; 
        } metal;
#endif        
} SWindowData_OSX;
