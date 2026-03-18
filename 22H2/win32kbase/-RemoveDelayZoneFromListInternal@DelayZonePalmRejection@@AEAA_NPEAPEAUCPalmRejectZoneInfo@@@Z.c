/*
 * XREFs of ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01E7098
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C00812F4 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C01E6F44 (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E71EC (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromListInternal(
        DelayZonePalmRejection *this,
        struct CPalmRejectZoneInfo **a2)
{
  void *v4; // rcx
  void *v5; // rcx
  char *v6; // rdx
  __int64 v7; // rcx
  char **v8; // rax
  int v9; // r9d
  char v10; // bl
  char v11; // dl
  CInpLockGuard *v13[9]; // [rsp+50h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v13,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  if ( a2 && *a2 )
  {
    v4 = (void *)*((_QWORD *)*a2 + 9);
    if ( v4 )
      ObfDereferenceObject(v4);
    v5 = (void *)*((_QWORD *)*a2 + 10);
    if ( v5 )
      ObfDereferenceObject(v5);
    v6 = (char *)*a2;
    v7 = *(_QWORD *)*a2;
    if ( *(struct CPalmRejectZoneInfo **)(v7 + 8) != *a2 || (v8 = (char **)*((_QWORD *)v6 + 1), *v8 != v6) )
      __fastfail(3u);
    *v8 = (char *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    if ( v6 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
    v9 = *((_DWORD *)this + 23) - 1;
    *((_DWORD *)this + 23) = v9;
    v10 = 1;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        4u,
        0x1Bu,
        (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids,
        v9);
  }
  else
  {
    v10 = 0;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v13);
  return v10;
}
