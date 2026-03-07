bool __fastcall PspIumReplenishPartitionPages(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v10; // r9
  int v11; // edx
  bool v12; // zf
  __int64 v14; // rdx
  unsigned int i; // esi
  int v16; // eax
  __int64 v17; // rax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  int v22; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 160);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v7 = 4;
    if ( CurrentIrql != 2 )
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
  {
    if ( *(_DWORD *)(a1 + 4) >= a2 )
    {
      if ( KiIrqlFlags )
      {
        v8 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & v10[5]) == 0;
          v10[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      return 1;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  }
  v14 = *(unsigned int *)(a1 + 156);
  v22 = *(_DWORD *)(a1 + 152) - v14 - *(_DWORD *)(a1 + 4);
  if ( v22 )
  {
    MmAllocateNonChargedSecurePages(*(_QWORD *)(a1 + 8), 0LL, &v22, v2 + 8 * v14);
    *(_DWORD *)(a1 + 156) += v22;
  }
  i = *(_DWORD *)(a1 + 4);
  if ( i < 8 )
  {
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 0) )
      _mm_pause();
    for ( i = *(_DWORD *)(a1 + 4); i < 8; *(_DWORD *)(a1 + 4) = i )
    {
      v16 = *(_DWORD *)(a1 + 156);
      if ( !v16 )
        break;
      v17 = (unsigned int)(v16 - 1);
      *(_DWORD *)(a1 + 156) = v17;
      *(_QWORD *)(a1 + 8LL * i + 24) = *(_QWORD *)(v2 + 8 * v17);
      i = *(_DWORD *)(a1 + 4) + 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      v20 = v19->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v12 = (v21 & v20[5]) == 0;
      v20[5] &= v21;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v19);
    }
  }
  __writecr8(CurrentIrql);
  return i >= a2;
}
