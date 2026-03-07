char __fastcall DelayZonePalmRejection::RemoveEdgeZonesForDevice(DelayZonePalmRejection *this, void *a2)
{
  int v4; // edx
  int v5; // r8d
  struct CPalmRejectZoneInfo *v6; // rbx
  struct CPalmRejectZoneInfo *v7; // rax
  CInpLockGuard *v9[8]; // [rsp+50h] [rbp-48h] BYREF
  struct CPalmRejectZoneInfo *v10; // [rsp+A0h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v9,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v6 = (struct CPalmRejectZoneInfo *)*((_QWORD *)this + 9);
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      29,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
      (char)a2);
  }
  while ( v6 != (DelayZonePalmRejection *)((char *)this + 72) )
  {
    v7 = v6;
    v10 = v6;
    v6 = *(struct CPalmRejectZoneInfo **)v6;
    if ( *((void **)v7 + 12) == a2 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v10);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v9);
  return 1;
}
