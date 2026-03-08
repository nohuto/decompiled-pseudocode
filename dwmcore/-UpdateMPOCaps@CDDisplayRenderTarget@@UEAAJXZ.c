/*
 * XREFs of ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801C71C0
 * Callers:
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1801E5530 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801E55A8 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x1800C8D58 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::UpdateMPOCaps(CDirectFlipInfo **this)
{
  int updated; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  updated = COverlayContext::UpdateMPOCaps(this + 6);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, updated, 0xC0u, 0LL);
  return v3;
}
