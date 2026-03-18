/*
 * XREFs of IoDiscardDeferredLiveDumpData @ 0x14094C328
 * Callers:
 *     DbgkpWerCleanupContext @ 0x140883C94 (DbgkpWerCleanupContext.c)
 * Callees:
 *     IopLiveDumpTraceInterfaceEnd @ 0x14055AD50 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14055AF54 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpReleaseResources @ 0x14094EEC8 (IopLiveDumpReleaseResources.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoDiscardDeferredLiveDumpData(PVOID P)
{
  IopLiveDumpTraceInterfaceStart();
  IopLiveDumpTraceInterfaceEnd((__int64)P, 2LL, 0);
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag(P, 0x706D644Cu);
  return 0LL;
}
