/*
 * XREFs of ?ProcessSetSDRBoost@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETSDRBOOST@@@Z @ 0x1801EA6F4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801EAE8C (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetSDRBoost(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETSDRBOOST *a3)
{
  float v3; // xmm1_4

  v3 = *((float *)a3 + 2);
  if ( *((float *)this + 475) != v3 )
  {
    *((float *)this + 475) = v3;
    CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts(this);
  }
  return 0LL;
}
