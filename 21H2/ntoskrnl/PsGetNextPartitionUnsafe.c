/*
 * XREFs of PsGetNextPartitionUnsafe @ 0x140363D98
 * Callers:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
 *     CcForEachPartition @ 0x140363C8C (CcForEachPartition.c)
 *     CcUnmapInactiveViews @ 0x14053B3F8 (CcUnmapInactiveViews.c)
 *     ExSwapinWorkerThreads @ 0x1407FFFE4 (ExSwapinWorkerThreads.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

_UNKNOWN **__fastcall PsGetNextPartitionUnsafe(_QWORD *Object)
{
  _UNKNOWN **v2; // rbp
  KIRQL v3; // al
  _UNKNOWN **v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&PspActivePartitionListLock);
  v4 = (_UNKNOWN **)PspActivePartitionListHead;
  v5 = v3;
  if ( Object )
    v4 = (_UNKNOWN **)Object[5];
  while ( v4 != &PspActivePartitionListHead )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v4 - 5)) )
    {
      v2 = v4 - 5;
      break;
    }
    v4 = (_UNKNOWN **)*v4;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&PspActivePartitionListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v2;
}
