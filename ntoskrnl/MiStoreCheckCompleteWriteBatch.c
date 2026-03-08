/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x1403AD3F4
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x1403AD2B0 (MiModifiedPageWriter.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1405BC8E4 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  volatile LONG *v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  if ( *(_DWORD *)(a1 + 1192) && !*(_DWORD *)(a1 + 1212) )
  {
    v2 = (volatile LONG *)(a1 + 1352);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1352));
    if ( !*(_DWORD *)(a1 + 1268) )
      SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 24LL) + 1408LL, 0LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v8 = (v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v3);
  }
}
