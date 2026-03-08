/*
 * XREFs of MmLockLoadedModuleListShared @ 0x1402280EC
 * Callers:
 *     MiAddWorkingSetEntries @ 0x14026D700 (MiAddWorkingSetEntries.c)
 *     RtlpxLookupFunctionTable @ 0x1402CB3A0 (RtlpxLookupFunctionTable.c)
 *     MiIsDriverPage @ 0x1402D38C0 (MiIsDriverPage.c)
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     RtlPcToFileName @ 0x1403A4E70 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x140631A9C (MiIsAddressInDriverView.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListShared(unsigned __int8 *a1)
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
  ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
  *a1 = CurrentIrql;
}
