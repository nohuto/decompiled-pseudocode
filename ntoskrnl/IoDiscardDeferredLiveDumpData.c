/*
 * XREFs of IoDiscardDeferredLiveDumpData @ 0x140949308
 * Callers:
 *     DbgkpWerCleanupContext @ 0x14087EEF4 (DbgkpWerCleanupContext.c)
 * Callees:
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405588B0 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140558AB4 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpReleaseResources @ 0x14094BEA8 (IopLiveDumpReleaseResources.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoDiscardDeferredLiveDumpData(PVOID P)
{
  IopLiveDumpTraceInterfaceStart();
  IopLiveDumpTraceInterfaceEnd((__int64)P, 2LL, 0);
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag(P, 0x706D644Cu);
  return 0LL;
}
