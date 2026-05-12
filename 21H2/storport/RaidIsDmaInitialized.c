/*
 * XREFs of RaidIsDmaInitialized @ 0x1C007A0FC
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C002BBFC (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C00316D4 (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C0039690 (StorPortGetUncachedExtension.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
