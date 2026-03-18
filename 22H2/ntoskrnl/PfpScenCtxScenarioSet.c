/*
 * XREFs of PfpScenCtxScenarioSet @ 0x140A883D8
 * Callers:
 *     PfpProcessScenarioPhase @ 0x1407D3BD0 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x140A9FF34 (PfPowerActionNotify.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8F0 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140582E30 (PfpScenCtxWaiterTimedOut.c)
 *     PfpServiceMainThreadBoost @ 0x140582E60 (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadBoostPrep @ 0x14097ED58 (PfpServiceMainThreadBoostPrep.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x140AA0260 (PfpScenCtxPrefetchAbortSet.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140AA0330 (PfpScenCtxPrefetchStateSet.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PfpScenCtxScenarioSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  KPRIORITY v9; // ebp
  PVOID Object[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)Object = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep(BugCheckParameter2, (PETHREAD *)Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 || *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    v9 = 1;
    if ( *(_DWORD *)(BugCheckParameter2 + 48) )
    {
      PfpScenCtxPrefetchStateSet(BugCheckParameter2);
      PfpScenCtxWaiterTimedOut(BugCheckParameter2);
      PfpScenCtxPrefetchAbortSet(BugCheckParameter2, 1);
      *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3;
    }
    if ( *(_DWORD *)(BugCheckParameter2 + 48) || a3 )
    {
      *(_DWORD *)(BugCheckParameter2 + 48) = a3;
      if ( a3 )
      {
        ++*(_DWORD *)(BugCheckParameter2 + 52);
        if ( a3 == 3 )
          *(_QWORD *)(BugCheckParameter2 + 56) = a4;
        if ( Object[0] )
        {
          PfpServiceMainThreadBoost(BugCheckParameter2, (ULONG_PTR *)Object);
          v9 = 0;
        }
        else
        {
          v9 = 4;
        }
      }
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64), v9, 0);
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 48) = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  if ( Object[0] )
    ObDereferenceObjectDeferDelete(Object[0]);
  if ( Object[1] )
    ExFreePoolWithTag(Object[1], 0);
}
