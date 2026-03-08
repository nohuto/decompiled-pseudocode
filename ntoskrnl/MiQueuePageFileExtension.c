/*
 * XREFs of MiQueuePageFileExtension @ 0x140638ECC
 * Callers:
 *     MiContractPagingFiles @ 0x1402A5364 (MiContractPagingFiles.c)
 *     MiIssuePageExtendRequest @ 0x14063890C (MiIssuePageExtendRequest.c)
 *     MiContractWsSwapPageFileWorker @ 0x140650250 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiQueuePageFileExtension(__int64 a1, __int64 a2, KIRQL a3)
{
  __int64 v3; // rdi
  KIRQL v4; // si
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a3;
  if ( a3 == 17 )
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1408));
  v6 = (_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 79) & 8) != 0 )
  {
    v7 = *(_QWORD **)(v3 + 1640);
    if ( *v7 == v3 + 1632 )
    {
      *v6 = v3 + 1632;
      *(_QWORD *)(a1 + 16) = v7;
      *v7 = v6;
      *(_QWORD *)(v3 + 1640) = v6;
      goto LABEL_10;
    }
LABEL_7:
    __fastfail(3u);
  }
  v8 = *(_QWORD **)(v3 + 1656);
  if ( *v8 != v3 + 1648 )
    goto LABEL_7;
  *v6 = v3 + 1648;
  *(_QWORD *)(a1 + 16) = v8;
  *v8 = v6;
  *(_QWORD *)(v3 + 1656) = v6;
  if ( *(_QWORD *)(a1 + 32) != -1LL )
    ++*(_DWORD *)(v3 + 2092);
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1408));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (v4 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return KeReleaseSemaphoreEx(v3 + 1584, 0, 1);
}
