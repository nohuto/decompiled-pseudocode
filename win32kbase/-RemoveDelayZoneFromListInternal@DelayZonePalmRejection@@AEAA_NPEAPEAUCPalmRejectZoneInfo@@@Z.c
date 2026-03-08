/*
 * XREFs of ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C0216A90
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C0096A2C (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C021693C (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0216BE4 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromListInternal(
        DelayZonePalmRejection *this,
        struct CPalmRejectZoneInfo **a2)
{
  int v4; // r8d
  void *v5; // rcx
  void *v6; // rcx
  char *v7; // rdx
  __int64 v8; // rcx
  char **v9; // rax
  int v10; // r9d
  char v11; // bl
  CInpLockGuard *v13[9]; // [rsp+50h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v13,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  if ( a2 && *a2 )
  {
    v5 = (void *)*((_QWORD *)*a2 + 9);
    if ( v5 )
      ObfDereferenceObject(v5);
    v6 = (void *)*((_QWORD *)*a2 + 10);
    if ( v6 )
      ObfDereferenceObject(v6);
    v7 = (char *)*a2;
    v8 = *(_QWORD *)*a2;
    if ( *(struct CPalmRejectZoneInfo **)(v8 + 8) != *a2 || (v9 = (char **)*((_QWORD *)v7 + 1), *v9 != v7) )
      __fastfail(3u);
    *v9 = (char *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    if ( v7 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
    v10 = *((_DWORD *)this + 23) - 1;
    *((_DWORD *)this + 23) = v10;
    v11 = 1;
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v7,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        8,
        27,
        (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
        v10);
    }
  }
  else
  {
    v11 = 0;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v13);
  return v11;
}
