/*
 * XREFs of RtlQueryPropertyStore @ 0x1405A8510
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     bsearch @ 0x1403D4280 (bsearch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405A8904 (RtlpAcquirePropStoreLockShared.c)
 */

__int64 __fastcall RtlQueryPropertyStore(void *Key, _QWORD *a2)
{
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rax
  unsigned int v6; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  v4 = (unsigned __int8)RtlpAcquirePropStoreLockShared(&RtlpPropStoreLock);
  if ( RtlpPropStoreEntries
    && (v5 = bsearch(
               Key,
               RtlpPropStoreEntries,
               (unsigned int)RtlpPropStoreEntriesActiveCount,
               0x18uLL,
               RtlpComparePropertyEntry)) != 0LL )
  {
    *a2 = v5[2];
    v6 = 0;
  }
  else
  {
    v6 = -1073741275;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpPropStoreLock);
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
  return v6;
}
