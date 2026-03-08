/*
 * XREFs of ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C021693C
 * Callers:
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C016E2A0 (NtUserDestroyPalmRejectionDelayZone.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C0216A90 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C0232148 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

bool __fastcall DelayZonePalmRejection::RemoveDelayZoneFromList(DelayZonePalmRejection *this, int a2)
{
  int v4; // edx
  int v5; // r8d
  __int64 *i; // rbx
  bool v7; // bl
  __int128 v9; // xmm6
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // [rsp+40h] [rbp-68h] BYREF
  CInpLockGuard *v14[10]; // [rsp+50h] [rbp-58h] BYREF
  struct CPalmRejectZoneInfo *v15; // [rsp+B0h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v14,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  for ( i = (__int64 *)*((_QWORD *)this + 9); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)((char *)this + 72) )
      goto LABEL_5;
    if ( *((_DWORD *)i + 14) == a2 )
      break;
  }
  v15 = (struct CPalmRejectZoneInfo *)i;
  if ( !i || (struct _KTHREAD *)i[2] != KeGetCurrentThread() )
  {
LABEL_5:
    v7 = 0;
    goto LABEL_6;
  }
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      28,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids);
  }
  v9 = *(_OWORD *)(i + 3);
  v7 = DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v15);
  if ( v7 )
  {
    v11 = *((_QWORD *)this + 16);
    if ( v11 )
    {
      v12 = *((unsigned int *)this + 1);
      v13 = v9;
      DelayZoneTelemetry::UpdateDelayZoneStateInfo(v11, v12, v10, 4LL, &v13);
    }
  }
LABEL_6:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v14);
  return v7;
}
