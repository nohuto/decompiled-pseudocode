/*
 * XREFs of ExInitializeTimeRefresh @ 0x140B3CBEC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x14031E33C (KiInitializeTimer2.c)
 *     ZwLockProductActivationKeys @ 0x14041C900 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x140812204 (ExGetExpirationDate.c)
 */

__int64 *ExInitializeTimeRefresh()
{
  __int64 *result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  ZwLockProductActivationKeys(0LL, 0LL);
  if ( !ExpSystemSetupInProgress )
  {
    if ( (int)ExGetExpirationDate(&ExpNtExpirationDate) < 0 )
      ExpNtExpirationDate.QuadPart = 0LL;
    ExpShuttingDown = 0;
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 712) = ExpNtExpirationDate;
  }
  LODWORD(ExpTimeRefreshDpc) = 275;
  qword_140C31938 = (__int64)ExpTimeRefreshDpcRoutine;
  qword_140C31958 = 0LL;
  qword_140C31940 = (__int64)&ExpOkToTimeRefresh;
  qword_140C31930 = 0LL;
  ExpTimeRefreshWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeRefreshWork;
  ExpTimeRefreshWorkItem.Parameter = 0LL;
  ExpTimeRefreshWorkItem.List.Flink = 0LL;
  word_140C31882 = 0;
  KiInitializeTimer2((unsigned __int64)&ExpTimeRefreshTimer, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v1[1] = -1LL;
  v1[0] = 0LL;
  ExpTimeRefreshInterval = -36000000000LL;
  KeSetTimer2((__int64)&ExpTimeRefreshTimer, -36000000000LL, 0LL, (__int64)v1);
  ExInitializeResourceLite(&ExpTimeRefreshLock);
  result = &ExpTimerResolutionListHead;
  qword_140C31A58 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}
