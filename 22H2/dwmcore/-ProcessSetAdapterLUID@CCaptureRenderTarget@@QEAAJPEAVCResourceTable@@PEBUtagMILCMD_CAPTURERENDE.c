/*
 * XREFs of ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x180187A08
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyDeviceInvalid@CDeviceManager@CCaptureRenderTarget@@QEAAXXZ @ 0x1800EDB04 (-NotifyDeviceInvalid@CDeviceManager@CCaptureRenderTarget@@QEAAXXZ.c)
 *     ??9@YA_NAEBU_LUID@@0@Z @ 0x18015C758 (--9@YA_NAEBU_LUID@@0@Z.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180187CB8 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetAdapterLUID(
        CD3DDevice **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID *a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rsi

  v3 = (_QWORD *)((char *)a3 + 8);
  v5 = this + 237;
  if ( operator!=((_DWORD *)this + 474, (_DWORD *)a3 + 2) )
  {
    CCaptureRenderTarget::ReleaseRenderingResources((CCaptureRenderTarget *)this);
    *v5 = *v3;
    CCaptureRenderTarget::CDeviceManager::NotifyDeviceInvalid(this + 236);
  }
  return 0LL;
}
