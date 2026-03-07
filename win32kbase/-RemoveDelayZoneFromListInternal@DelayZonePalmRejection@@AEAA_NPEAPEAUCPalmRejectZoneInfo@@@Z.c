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
