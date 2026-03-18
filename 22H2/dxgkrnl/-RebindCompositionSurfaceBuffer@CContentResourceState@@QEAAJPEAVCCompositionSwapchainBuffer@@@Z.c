/*
 * XREFs of ?RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C0087C50
 * Callers:
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C00866D8 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C0086EA8 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 * Callees:
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C00885AC (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 */

int __fastcall CContentResourceState::RebindCompositionSurfaceBuffer(
        CContentResource **this,
        struct CCompositionSwapchainBuffer *a2)
{
  int result; // eax

  result = CContentResource::RebindCompositionSurfaceBuffer(this[3], a2);
  if ( result >= 0 )
    this[7] = (CContentResource *)*((_QWORD *)this[3] + 7);
  return result;
}
