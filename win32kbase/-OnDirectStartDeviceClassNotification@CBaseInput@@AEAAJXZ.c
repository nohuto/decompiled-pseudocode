/*
 * XREFs of ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00D7650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004F93C (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00D76C0 (RIMDirectStartDeviceClassNotifications.c)
 */

__int64 __fastcall CBaseInput::OnDirectStartDeviceClassNotification(CBaseInput *this)
{
  unsigned int Count; // eax
  char v3; // bl
  int v4; // edx
  int started; // edi
  int v6; // r8d
  __int64 *v8; // [rsp+68h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v8, "OnDirectStartDeviceClassNotification", 0LL);
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
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        16,
        (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids,
        started);
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v8);
  return (unsigned int)started;
}
