__int64 __fastcall KeWaitForGate(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // r15d
  $FF35E1D90CD8CB7063F56392666DF2F1 *v7; // rdi
  unsigned __int8 CurrentIrql; // r8
  unsigned int v9; // esi
  struct _LIST_ENTRY *v10; // rcx
  _DWORD *SchedulerAssist; // r10

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v7 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        a2 = 4LL;
      else
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= a2;
    }
    CurrentThread->WaitIrql = CurrentIrql;
    LOBYTE(a2) = a3;
    v9 = KiBeginThreadWait(CurrentThread, a2, v5, 0LL);
    if ( v9 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe(a1);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, 0LL);
      return v9;
    }
    v10 = *(struct _LIST_ENTRY **)(a1 + 16);
    if ( v10->Flink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v7->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v10;
    v10->Flink = (struct _LIST_ENTRY *)v7;
    *(_QWORD *)(a1 + 16) = v7;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v9 = (unsigned int)KiCommitThreadWait((ULONG_PTR)CurrentThread, (__int64 *)&CurrentThread->320, 0LL, 0LL, 0LL);
  }
  while ( v9 == 256 );
  return v9;
}
