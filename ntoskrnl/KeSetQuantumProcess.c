/*
 * XREFs of KeSetQuantumProcess @ 0x1402E39BC
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x1402E2E30 (KeSetPriorityAndQuantumProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x1406FF17C (PspApplyJobLimitsToProcess.c)
 *     PsChangeQuantumTable @ 0x14076EDA4 (PsChangeQuantumTable.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KeSetQuantumProcess(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bl
  volatile LONG *v5; // r14
  _QWORD **v6; // rdi
  _QWORD *i; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rax
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf

  if ( *(_BYTE *)(a1 + 641) != a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v9) = 4;
      if ( CurrentIrql != 2 )
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    v5 = (volatile LONG *)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    *(_BYTE *)(a1 + 641) = a2;
    v6 = (_QWORD **)(a1 + 48);
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
      *((_BYTE *)i - 109) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( KiIrqlFlags )
    {
      v10 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
}
