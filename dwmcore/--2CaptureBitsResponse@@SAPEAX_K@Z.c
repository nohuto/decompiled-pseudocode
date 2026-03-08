/*
 * XREFs of ??2CaptureBitsResponse@@SAPEAX_K@Z @ 0x1801ED9FC
 * Callers:
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801EDA2C (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 *     ?ProcessCaptureBits@CDesktopTree@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPTREE_CAPTUREBITS@@@Z @ 0x1802538A0 (-ProcessCaptureBits@CDesktopTree@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_DESKTOPTREE_CAPTUREBIT.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CaptureBitsResponse::operator new()
{
  LPVOID result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x698uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
