/*
 * XREFs of ?OnDriverUnload@CTopologyManager@@SAXXZ @ 0x1C00B96E0
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B8EAC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void CTopologyManager::OnDriverUnload(void)
{
  char *v0; // rdx
  bool v1; // al
  _UNKNOWN **v2; // r8
  void *v3; // rdx

  v0 = (char *)qword_1C02965B0;
  if ( qword_1C02965B0 )
  {
    v1 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v2 = &WPP_RECORDER_INITIALIZED;
    if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = &WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids;
      LOBYTE(v3) = v1;
      LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v3,
        (_DWORD)v2,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        27,
        20,
        (__int64)&WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids);
      v0 = (char *)qword_1C02965B0;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v0, 0xFFFFFFFF) == 1 )
    {
      if ( v0 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v0);
    }
    qword_1C02965B0 = 0LL;
  }
}
