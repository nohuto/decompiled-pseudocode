/*
 * XREFs of RtlQueryPointerMapping @ 0x1405E7640
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405E7B68 (RtlpAcquirePropStoreLockShared.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v4 = RtlpAcquirePropStoreLockShared(&RtlpPtrTreeLock);
  v5 = (unsigned __int64)RtlpPtrTree;
  v6 = v4;
  if ( (qword_140C0D788 & 1) != 0 && RtlpPtrTree )
    v5 = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree;
  while ( v5 )
  {
    if ( a1 - *(_QWORD *)(v5 + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(v5 + 24) <= 0 )
      {
        *a2 = *(_QWORD *)(v5 + 32);
        break;
      }
      v7 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v7 = *(_QWORD *)v5;
    }
    if ( (qword_140C0D788 & 1) != 0 && v7 )
      v5 ^= v7;
    else
      v5 = v7;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpPtrTreeLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v5 == 0 ? 0xC0000225 : 0;
}
