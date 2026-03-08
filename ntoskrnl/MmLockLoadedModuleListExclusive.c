/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x1402B29E0
 * Callers:
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     RtlInsertInvertedFunctionTable @ 0x1402B26C8 (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x1402B2790 (MiProcessLoaderEntry.c)
 *     MiUpdateDriverLoadInProgress @ 0x1402B2970 (MiUpdateDriverLoadInProgress.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1402FE620 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionInsertImage @ 0x14036BEC4 (MiSessionInsertImage.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     MiShowBadMapper @ 0x14062EC9C (MiShowBadMapper.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListExclusive(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v3; // dl
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    v3 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v3 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v3 == 15 )
          LODWORD(v5) = 0x8000;
        else
          v5 = (-1LL << (v3 + 1)) & 0xFFFC;
        SchedulerAssist[5] |= v5;
      }
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
  *a1 = CurrentIrql;
}
