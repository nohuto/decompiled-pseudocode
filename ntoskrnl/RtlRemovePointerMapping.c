/*
 * XREFs of RtlRemovePointerMapping @ 0x1405A8600
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x1405A8890 (RtlpAcquirePropStoreLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v4 = (unsigned __int8)RtlpAcquirePropStoreLockExclusive(&RtlpPtrTreeLock);
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
    RtlRbRemoveNode((unsigned __int64 *)&RtlpPtrTree, v5);
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpPtrTreeLock);
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
  if ( !v5 )
    return 3221226021LL;
  *a2 = *(_QWORD *)(v5 + 32);
  ExFreePoolWithTag((PVOID)v5, 0);
  return 0LL;
}
