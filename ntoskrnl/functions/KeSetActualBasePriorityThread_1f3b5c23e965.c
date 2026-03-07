__int64 __fastcall KeSetActualBasePriorityThread(ULONG_PTR BugCheckParameter1, int a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  char v5; // r15
  unsigned int v6; // edi
  _BYTE *v7; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v12 = a2;
  if ( *(_UNKNOWN **)(BugCheckParameter1 + 544) == &KiInitialProcess )
    return 1LL;
  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v10) = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (_KTHREAD *)BugCheckParameter1 == CurrentPrcb->CurrentThread;
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  v6 = *(char *)(BugCheckParameter1 + 563);
  *(_BYTE *)(BugCheckParameter1 + 645) = 0;
  KiSetBasePriorityAndClearDecrement(BugCheckParameter1, &v12, 0);
  KiAdjustRealtimePriorityFloor(BugCheckParameter1, v12);
  if ( v12 != *(char *)(BugCheckParameter1 + 195) )
  {
    KiSetQuantumTargetThread(BugCheckParameter1, (__int64)CurrentPrcb, v5);
    KiSetPriorityThread(BugCheckParameter1, (unsigned __int64)&v13, v12);
  }
  v7 = *(_BYTE **)(BugCheckParameter1 + 232);
  if ( v7 && (*v7 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v7, BugCheckParameter1);
  else
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v13, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(BugCheckParameter1, 1329, v6, v12, (__int64)&v12);
  return v6;
}
