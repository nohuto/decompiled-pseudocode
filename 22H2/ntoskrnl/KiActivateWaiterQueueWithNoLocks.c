/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x1402F781C
 * Callers:
 *     KiCommitThreadWait @ 0x1402C6640 (KiCommitThreadWait.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402F76C0 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwitchQueue @ 0x1402F7798 (KiSwitchQueue.c)
 *     KiSwitchPriQueue @ 0x140328378 (KiSwitchPriQueue.c)
 *     KeTerminateThread @ 0x140341500 (KeTerminateThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14029CF60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterKQueue @ 0x1402F7950 (KiActivateWaiterKQueue.c)
 *     KiActivateWaiterPriQueue @ 0x1402F79E4 (KiActivateWaiterPriQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile LONG *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v17; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // [rsp+30h] [rbp+8h] BYREF

  v5 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a2 >> 4) & 0x3F));
  ExAcquireSpinLockSharedAtDpcLevel(v5);
  v9 = *(volatile signed __int32 **)(a1 + 232);
  if ( v9 )
  {
    KiAcquireKobjectLockSafe(*(volatile signed __int32 **)(a1 + 232), v6, v7, v8);
    if ( !*(_QWORD *)(a1 + 232) )
    {
      _InterlockedAnd(v9, 0xFFFFFF7F);
      v9 = 0LL;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( v9 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v9 & 0x7F) == 0x15 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = 0;
        while ( 1 )
        {
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v18 = SchedulerAssist[6];
              SchedulerAssist[6] = v18 + 1;
              if ( v18 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v19 = CurrentPrcb->SchedulerAssist;
          if ( v19 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v20 = v19[6] - 1;
              v19[6] = v20;
              if ( !v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v21, v10, v11, v12);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v17 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v9[v17 + 134]);
        KiReleaseThreadLockSafe(a1);
      }
      else
      {
        _InterlockedDecrement(v9 + 10);
      }
      v13 = *a3;
      v14 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v14 != a3 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v9 & 0x7F) == 0x15 )
      KiActivateWaiterPriQueue(v9);
    else
      KiActivateWaiterKQueue(v9);
  }
}
