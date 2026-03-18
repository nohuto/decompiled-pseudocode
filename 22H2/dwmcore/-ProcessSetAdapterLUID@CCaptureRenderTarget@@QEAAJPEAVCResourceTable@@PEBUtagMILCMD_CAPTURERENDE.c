/*
 * XREFs of ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x1801ED780
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034B30 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801EDA78 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetAdapterLUID(
        CD3DDevice **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID *a3)
{
  CD3DDevice *v5; // rcx

  if ( *((_DWORD *)this + 470) != *((_DWORD *)a3 + 2) || *((_DWORD *)this + 471) != *((_DWORD *)a3 + 3) )
  {
    CCaptureRenderTarget::ReleaseRenderingResources((CCaptureRenderTarget *)this);
    this[235] = (CD3DDevice *)*((_QWORD *)a3 + 1);
    v5 = this[234];
    this[234] = 0LL;
    if ( v5 )
      CD3DDevice::Release(v5);
  }
  return 0LL;
}
