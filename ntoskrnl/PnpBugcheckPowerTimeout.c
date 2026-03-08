/*
 * XREFs of PnpBugcheckPowerTimeout @ 0x14055EC88
 * Callers:
 *     PnpPowerStateTransitionWatchdogCallback @ 0x14055E2B0 (PnpPowerStateTransitionWatchdogCallback.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140AA40F0 (PopBuildDeviceNotifyListWatchdog.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PnpBugcheckPowerTimeout(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  ULONG_PTR BugCheckParameter4[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
  if ( !*(_QWORD *)&PnpDelayedRemoveWorkerThread )
  {
    v1 = *(_QWORD *)&PnpDeviceEventThread;
    if ( !*(_QWORD *)&PnpDeviceEventThread )
      v1 = PnpDeviceActionThread;
  }
  BugCheckParameter4[1] = (ULONG_PTR)&PnpDeviceCompletionQueue;
  BugCheckParameter4[2] = ExWorkerQueue;
  BugCheckParameter4[3] = IoWorkerQueue;
  BugCheckParameter4[0] = 163841LL;
  KeBugCheckEx(0x9Fu, 4uLL, (unsigned int)BugCheckParameter2, v1, (ULONG_PTR)BugCheckParameter4);
}
