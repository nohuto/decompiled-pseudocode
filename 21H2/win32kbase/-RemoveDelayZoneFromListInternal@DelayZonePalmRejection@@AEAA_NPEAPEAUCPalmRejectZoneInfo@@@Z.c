/*
 * XREFs of ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01AD9B8
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C006C044 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C01AD898 (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01ADAB8 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCB00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01874D8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromListInternal(
        DelayZonePalmRejection *this,
        struct CPalmRejectZoneInfo **a2)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  int v8; // edx
  int v9; // eax
  int v11; // [rsp+28h] [rbp-50h]
  CInpLockGuard *v12[8]; // [rsp+30h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v12,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v4 = 0;
  if ( a2 )
  {
    v5 = (__int64)*a2;
    if ( *a2 )
    {
      if ( *(_QWORD *)(v5 + 72) )
      {
        ObfDereferenceObject(*(PVOID *)(v5 + 72));
        v5 = (__int64)*a2;
      }
      if ( *(_QWORD *)(v5 + 80) )
      {
        ObfDereferenceObject(*(PVOID *)(v5 + 80));
        v5 = (__int64)*a2;
      }
      v6 = *(_QWORD *)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)(v5 + 8), *v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      Win32FreePool(v5);
      v9 = *((_DWORD *)this + 23) - 1;
      *((_DWORD *)this + 23) = v9;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = v9;
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_d((_DWORD)gBaseLog, v8, 8, 27, (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids, v11);
      }
      v4 = 1;
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v12);
  return v4;
}
