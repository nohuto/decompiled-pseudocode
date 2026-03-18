/*
 * XREFs of ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800AC768
 * Callers:
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x1800AC740 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1801DFC28 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x1801F041C (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 * Callees:
 *     ?QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z @ 0x1800AC7B8 (-QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CResponseItem::QueueResponse(CResponseItem *this)
{
  int v1; // edi

  v1 = 0;
  if ( !*((_BYTE *)this + 32) && !*((_BYTE *)this + 33) )
  {
    v1 = CLegacySurfaceManager::QueuePostPresentResponse((CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 152LL), this);
    if ( v1 < 0 )
      (*(void (__fastcall **)(CResponseItem *, _QWORD))(*(_QWORD *)this + 56LL))(this, (unsigned int)v1);
    else
      *((_BYTE *)this + 32) = 1;
  }
  return (unsigned int)v1;
}
