_QWORD *__fastcall MiCreateProcessLargePageCacheAnchor(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  void *v5; // rbp
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  result = MiAllocatePool(64, 72LL * (unsigned __int16)KeNumberNodes + 32, 0x704C694Du);
  v3 = result;
  if ( result )
  {
    v4 = result + 4;
    v5 = 0LL;
    v6 = (unsigned __int16)KeNumberNodes;
    v7 = 24LL * (unsigned __int16)KeNumberNodes;
    v8 = 3LL;
    do
    {
      v9 = v4;
      if ( (_DWORD)v6 )
      {
        v10 = v6;
        do
        {
          v9[1] = v9;
          *v9 = v9;
          v9 += 3;
          --v10;
        }
        while ( v10 );
      }
      v4 = (_QWORD *)((char *)v4 + v7);
      --v8;
    }
    while ( v8 );
    v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 48;
    v3[2] = v11;
    v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16084));
    if ( *(_QWORD *)(v11 + 280) )
    {
      v5 = v3;
      v3 = *(_QWORD **)(v11 + 280);
    }
    else
    {
      *(_QWORD *)(v11 + 280) = v3;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 288));
    v13 = *(_QWORD **)(a1 + 16096);
    if ( *v13 != a1 + 16088 )
      __fastfail(3u);
    *v3 = a1 + 16088;
    v3[1] = v13;
    *v13 = v3;
    *(_QWORD *)(a1 + 16096) = v3;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 288));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16084));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v12);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v3;
  }
  return result;
}
