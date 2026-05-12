/*
 * XREFs of RaidIsDmaInitialized @ 0x1C007A0FC
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C002BBDC (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C00316B4 (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C0039670 (StorPortGetUncachedExtension.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
