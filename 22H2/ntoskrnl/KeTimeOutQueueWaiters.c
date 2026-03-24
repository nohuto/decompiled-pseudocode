/*
 * XREFs of KeTimeOutQueueWaiters @ 0x1402DCFBC
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x1403B6F40 (ExpWorkerFactoryManagerThread.c)
 *     ExpWorkQueueManagerThread @ 0x1407AFC80 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiTryUnwaitThread @ 0x1402C2EB0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 */

__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned int v5; // ebp
  unsigned int v6; // r12d
  int v7; // r13d
  volatile CCHAR v8; // cl
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v15; // rax

  v5 = 0;
  v6 = a3;
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeNumberProcessorsGroup0[2];
  v9 = (a2 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
  v10 = v9 >> v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v9 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)v9 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, v9, a3, (__int64)SchedulerAssist);
  v12 = *(_QWORD **)(a1 + 16);
  while ( v12 != (_QWORD *)(a1 + 8) && v5 < v6 )
  {
    v13 = (__int64)v12;
    v12 = (_QWORD *)v12[1];
    if ( *(_BYTE *)(v13 + 16) == 3 )
    {
      if ( v7 - *(_DWORD *)(*(_QWORD *)(v13 + 24) + 436LL) < (unsigned int)v10 )
        break;
      v15 = *(_QWORD *)v13;
      if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || *v12 != v13 )
        __fastfail(3u);
      *v12 = v15;
      *(_QWORD *)(v15 + 8) = v12;
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)KeGetCurrentPrcb(), v13, 258LL, 0LL) )
        ++v5;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0LL, CurrentIrql);
  return v5;
}
