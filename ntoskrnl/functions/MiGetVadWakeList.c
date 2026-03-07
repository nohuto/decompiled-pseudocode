unsigned __int64 __fastcall MiGetVadWakeList(__int64 a1, int a2)
{
  unsigned __int64 v2; // rsi
  _QWORD *v5; // r12
  _KPROCESS *Process; // rbp
  volatile signed __int32 *v7; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v13; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx

  v2 = 0LL;
  v5 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].IdealProcessor[30] & 7) == 2 )
    v7 = (volatile signed __int32 *)&unk_140C69E00;
  else
    v7 = (volatile signed __int32 *)&Process[1].IdealNode[2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v15) = 4;
    else
      v15 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v15;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7, CurrentIrql);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v7, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(v7);
    while ( 1 )
    {
      v10 = *(unsigned int *)v7;
      LODWORD(v10) = v10 & 0xBFFFFFFF;
      if ( (_DWORD)v10 == 0x80000000 )
        break;
      if ( (*v7 & 0x40000000) == 0 )
        _InterlockedOr(v7, 0x40000000u);
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  *((_DWORD *)v7 + 1) = 0;
  v11 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v11 )
  {
    do
    {
      v13 = *(_QWORD *)v11;
      if ( (a2 & *(_DWORD *)(v11 + 64)) != 0 )
      {
        *(_QWORD *)v11 = v2;
        v2 = v11;
        if ( v5 )
          *v5 = v13;
        else
          *(_QWORD *)(a1 + 56) = v13 | *(_DWORD *)(a1 + 56) & 0xF;
      }
      else
      {
        v5 = (_QWORD *)v11;
      }
      v11 = v13;
    }
    while ( v13 );
  }
  MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessors.StaticBitmap[26], CurrentIrql);
  return v2;
}
