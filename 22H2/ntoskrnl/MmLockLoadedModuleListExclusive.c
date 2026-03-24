/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x140372D48
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x1403729D8 (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x140372B40 (MiProcessLoaderEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x140373044 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionRemoveImage @ 0x14038A8F8 (MiSessionRemoveImage.c)
 *     MiSessionInsertImage @ 0x1403A2274 (MiSessionInsertImage.c)
 *     MiShowBadMapper @ 0x14052D12C (MiShowBadMapper.c)
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListExclusive(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v2; // cl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
  {
    v2 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v2 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (v2 + 1)) - 1) & 0xFFFC;
      }
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
}
