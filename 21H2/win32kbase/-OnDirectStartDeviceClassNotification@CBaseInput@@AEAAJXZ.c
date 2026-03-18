/*
 * XREFs of ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00D3340
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00D3390 (RIMDirectStartDeviceClassNotifications.c)
 */

__int64 __fastcall CBaseInput::OnDirectStartDeviceClassNotification(CBaseInput *this)
{
  unsigned int Count; // eax
  char v3; // bl
  int v4; // edx
  int started; // edi
  int v6; // r8d

  Count = AtomicExecutionCheck::GetCount();
  v3 = 1;
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  started = RIMDirectStartDeviceClassNotifications(*((_QWORD *)this + 1), gpWin32kDriverObject);
  if ( started < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v3 = 0;
    }
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = v3;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        16,
        (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids,
        started);
    }
  }
  return (unsigned int)started;
}
