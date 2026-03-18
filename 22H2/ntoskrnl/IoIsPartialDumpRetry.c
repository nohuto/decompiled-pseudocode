/*
 * XREFs of IoIsPartialDumpRetry @ 0x140550880
 * Callers:
 *     HvlAddPagesCallbackRoutine @ 0x1405473C0 (HvlAddPagesCallbackRoutine.c)
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x1405474E0 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x140547538 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x140547760 (HvlAddSecureSkPagesCallbackRoutine.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140569588 (KeValidateBugCheckCallbackRecord.c)
 * Callees:
 *     <none>
 */

char IoIsPartialDumpRetry()
{
  char result; // al

  result = CrashdmpDumpBlock;
  if ( CrashdmpDumpBlock )
    return (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 8) != 0;
  return result;
}
