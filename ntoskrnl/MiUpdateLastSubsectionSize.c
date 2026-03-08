/*
 * XREFs of MiUpdateLastSubsectionSize @ 0x1402A4BE0
 * Callers:
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140368520 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSubsectionCharges @ 0x140668BC8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiUpdateLastSubsectionSize(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _WORD *v3; // r15
  __int64 v5; // rbp
  int v7; // ebx
  volatile LONG *v8; // r14
  unsigned __int64 v9; // rsi
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  __int16 v11; // dx
  __int64 v12; // r10
  __int16 v13; // r9
  __int64 v14; // rax
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax

  v3 = *(_WORD **)a1;
  v5 = a3;
  v7 = 0;
  v8 = (volatile LONG *)(*(_QWORD *)a1 + 72LL);
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(v8);
    if ( !(_DWORD)v5 )
      break;
    SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(a1);
    if ( (*(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF) == 0 )
    {
      if ( v7 == 1 )
        v7 = 2;
LABEL_6:
      *(_DWORD *)(a1 + 52) ^= (*(_DWORD *)(a1 + 52) ^ (*(_DWORD *)(a1 + 52) - v5)) & 0x3FFFFFFF;
      break;
    }
    if ( v7 )
      goto LABEL_6;
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v9);
    result = MiGetSubsectionCharges(a1, v5);
    if ( (int)result < 0 )
      return result;
    v7 = 1;
  }
  v11 = *(_WORD *)(a1 + 34);
  *(_DWORD *)(a1 + 40) = (*a2 >> 12) - (*(_DWORD *)(a1 + 36) | ((*(_WORD *)(a1 + 32) & 0xFFC0) << 26));
  *(_WORD *)(a1 + 34) = (16 * *(_WORD *)a2) | v11 & 0xF;
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v20 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  __writecr8(v9);
  if ( (_DWORD)v5 )
  {
    v12 = *(_QWORD *)v3;
    _InterlockedExchange64(
      (volatile __int64 *)(*(_QWORD *)v3 + 24LL),
      _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 24LL), -1LL, -1LL) + (v5 << 12));
    v13 = *(_WORD *)(v12 + 12);
    v14 = *(unsigned int *)(v12 + 8);
    *(_DWORD *)(v12 + 8) = v5 + v14;
    *(_WORD *)(v12 + 12) = v13 ^ (v13 ^ ((v5 + (v14 | ((unsigned __int64)(v13 & 0x3FF) << 32))) >> 32)) & 0x3FF;
    if ( v7 == 2 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C67048 + 8LL * (v3[30] & 0x3FF)), 1LL, v5);
  }
  return 0LL;
}
