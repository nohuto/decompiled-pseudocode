/*
 * XREFs of RaidUnitSavePowerCycleCountWorker @ 0x1C00164C0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C000B5D0 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C0019400 (RaidUnitSavePowerCycleCount.c)
 */

void __fastcall RaidUnitSavePowerCycleCountWorker(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  RaidUnitSavePowerCycleCount(Context);
  Context[114] &= ~2u;
  RaUnitReleaseRemoveLock((__int64)Context);
  IoFreeWorkItem(IoWorkItem);
}
