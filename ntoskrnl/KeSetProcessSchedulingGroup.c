/*
 * XREFs of KeSetProcessSchedulingGroup @ 0x1403556A4
 * Callers:
 *     PspTerminateProcess @ 0x1407DC198 (PspTerminateProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x1407DCF7C (PspSetProcessSchedulingGroup.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetThreadSchedulingGroup @ 0x1403557B8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rax
  _QWORD *i; // rdi
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v12; // r9
  int v13; // edx
  bool v14; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v8) = 4;
    if ( CurrentIrql != 2 )
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v5 = *(_QWORD *)(a1 + 880);
  if ( v5 != a2 )
  {
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      if ( *(i - 82) != a2 )
        KiSetThreadSchedulingGroup(i - 95, a2);
    }
    *(_QWORD *)(a1 + 880) = a2;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
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
  return v5;
}
