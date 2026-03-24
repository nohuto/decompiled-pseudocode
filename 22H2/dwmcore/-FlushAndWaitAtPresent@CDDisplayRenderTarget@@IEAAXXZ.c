/*
 * XREFs of ?FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018C114
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18018C380 (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18008F604 (-GetCurrentFrameId@@YA_KXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B284C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?SignalRenderFence@CD3DDevice@@QEAAJ_K@Z @ 0x1802403B4 (-SignalRenderFence@CD3DDevice@@QEAAJ_K@Z.c)
 */

void __fastcall CDDisplayRenderTarget::FlushAndWaitAtPresent(CDDisplayRenderTarget *this)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v3; // r8
  __int64 v4; // r8
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-28h] BYREF

  CurrentFrameId = GetCurrentFrameId();
  CD3DDevice::SignalRenderFence(*(CD3DDevice **)(*((_QWORD *)this + 21) + 88LL), CurrentFrameId);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start,
      v3,
      1u,
      &v5);
  WaitForSingleObject(*(HANDLE *)(*((_QWORD *)this + 21) + 392LL), 0x64u);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop,
      v4,
      1u,
      &v5);
  *((_BYTE *)this + 18623) = 0;
}
