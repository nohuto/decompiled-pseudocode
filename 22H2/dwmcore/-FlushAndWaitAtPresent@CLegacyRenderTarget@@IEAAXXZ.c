/*
 * XREFs of ?FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ @ 0x180184484
 * Callers:
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BEFD8 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18008F604 (-GetCurrentFrameId@@YA_KXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B284C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?SignalRenderFence@CD3DDevice@@QEAAJ_K@Z @ 0x1802403B4 (-SignalRenderFence@CD3DDevice@@QEAAJ_K@Z.c)
 */

void __fastcall CLegacyRenderTarget::FlushAndWaitAtPresent(CLegacyRenderTarget *this)
{
  __int64 v2; // rcx
  unsigned __int64 CurrentFrameId; // rax
  CD3DDevice *v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 20) + 8LL) + 12LL) + *((_QWORD *)this + 20) + 8LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  CurrentFrameId = GetCurrentFrameId();
  CD3DDevice::SignalRenderFence(v4, CurrentFrameId);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start,
      v5,
      1u,
      &v7);
  WaitForSingleObject(*((HANDLE *)this + 2322), 0x64u);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop,
      v6,
      1u,
      &v7);
  *((_BYTE *)this + 18589) = 0;
}
