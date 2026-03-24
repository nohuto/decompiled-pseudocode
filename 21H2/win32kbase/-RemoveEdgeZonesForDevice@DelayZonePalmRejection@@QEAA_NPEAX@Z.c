/*
 * XREFs of ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01ADAB8
 * Callers:
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C01ADE40 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCB00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01874D8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01AD9B8 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 */

char __fastcall DelayZonePalmRejection::RemoveEdgeZonesForDevice(DelayZonePalmRejection *this, void *a2)
{
  int v4; // edx
  struct CPalmRejectZoneInfo *v5; // rbx
  struct CPalmRejectZoneInfo *v6; // rax
  CInpLockGuard *v8[8]; // [rsp+30h] [rbp-48h] BYREF
  struct CPalmRejectZoneInfo *v9; // [rsp+80h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v8,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v5 = (struct CPalmRejectZoneInfo *)*((_QWORD *)this + 9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q((_DWORD)gBaseLog, v4, 8, 29, (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids, a2);
  }
  while ( v5 != (DelayZonePalmRejection *)((char *)this + 72) )
  {
    v6 = v5;
    v9 = v5;
    v5 = *(struct CPalmRejectZoneInfo **)v5;
    if ( *((void **)v6 + 12) == a2 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v9);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v8);
  return 1;
}
