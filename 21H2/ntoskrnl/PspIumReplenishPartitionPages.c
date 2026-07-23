/*
 * XREFs of PspIumReplenishPartitionPages @ 0x1405841A8
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     PspIumGetPhysicalPage @ 0x14090CC9C (PspIumGetPhysicalPage.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053454C (MmAllocateNonChargedSecurePages.c)
 */

bool __fastcall PspIumReplenishPartitionPages(__int64 a1, unsigned int a2)
{
  __int64 v3; // r15
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v9; // r9
  int v10; // edx
  bool v11; // zf
  __int64 v13; // rdx
  unsigned int i; // edi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  unsigned int v22; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 160) + 48LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(a1 + 88)) )
  {
    if ( *(_DWORD *)(a1 + 4) >= a2 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v7 = KeGetCurrentIrql();
          if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v11 = (v10 & v9[5]) == 0;
            v9[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      return 1;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  }
  v13 = *(unsigned int *)(a1 + 156);
  v22 = *(_DWORD *)(a1 + 152) - v13 - *(_DWORD *)(a1 + 4);
  if ( v22 )
  {
    MmAllocateNonChargedSecurePages(*(ULONG_PTR ***)(a1 + 8), &v22, (__int64 *)(v3 + 8 * v13));
    *(_DWORD *)(a1 + 156) += v22;
  }
  i = *(_DWORD *)(a1 + 4);
  if ( i < 8 )
  {
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 0) )
      _mm_pause();
    for ( i = *(_DWORD *)(a1 + 4); i < 8; *(_DWORD *)(a1 + 4) = i )
    {
      v15 = *(_DWORD *)(a1 + 156);
      if ( !v15 )
        break;
      v16 = *(unsigned int *)(a1 + 4);
      v17 = (unsigned int)(v15 - 1);
      *(_DWORD *)(a1 + 156) = v17;
      *(_QWORD *)(a1 + 8 * v16 + 24) = *(_QWORD *)(v3 + 8 * v17);
      i = *(_DWORD *)(a1 + 4) + 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
    }
  }
  __writecr8(CurrentIrql);
  return i >= a2;
}
