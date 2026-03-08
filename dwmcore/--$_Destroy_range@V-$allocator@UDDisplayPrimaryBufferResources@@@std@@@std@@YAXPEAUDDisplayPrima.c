/*
 * XREFs of ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@QEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x180284A6C
 * Callers:
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180285070 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180287A90 (-NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ??$_Uninitialized_move@PEAUDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAPEAUDDisplayPrimaryBufferResources@@QEAU1@0PEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x18028E240 (--$_Uninitialized_move@PEAUDDisplayPrimaryBufferResources@@V-$allocator@UDDisplayPrimaryBufferRe.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802904A8 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 *     ?_Change_array@?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEAAXQEAUDDisplayPrimaryBufferResources@@_K1@Z @ 0x1802950D4 (-_Change_array@-$vector@UDDisplayPrimaryBufferResources@@V-$allocator@UDDisplayPrimaryBufferReso.c)
 * Callees:
 *     ??1DDisplayPrimaryBufferResources@@QEAA@XZ @ 0x1802853A4 (--1DDisplayPrimaryBufferResources@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(
        DDisplayPrimaryBufferResources *this,
        DDisplayPrimaryBufferResources *a2)
{
  DDisplayPrimaryBufferResources *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      DDisplayPrimaryBufferResources::~DDisplayPrimaryBufferResources(v3);
      v3 = (DDisplayPrimaryBufferResources *)((char *)v3 + 32);
    }
    while ( v3 != a2 );
  }
}
