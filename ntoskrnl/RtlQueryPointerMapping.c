/*
 * XREFs of RtlQueryPointerMapping @ 0x1405A83D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405A8904 (RtlpAcquirePropStoreLockShared.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v4 = (unsigned __int8)RtlpAcquirePropStoreLockShared(&RtlpPtrTreeLock);
  if ( (qword_140C0DB48 & 1) != 0 )
  {
    if ( RtlpPtrTree )
      v5 = RtlpPtrTree ^ (unsigned __int64)&RtlpPtrTree;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = RtlpPtrTree;
  }
  while ( v5 )
  {
    if ( a1 - *(_QWORD *)(v5 + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(v5 + 24) <= 0 )
        break;
      v6 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v6 = *(_QWORD *)v5;
    }
    if ( (qword_140C0DB48 & 1) != 0 && v6 )
      v5 ^= v6;
    else
      v5 = v6;
  }
  if ( v5 )
    *a2 = *(_QWORD *)(v5 + 32);
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpPtrTreeLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return v5 == 0 ? 0xC0000225 : 0;
}
