/*
 * XREFs of IoIsPartialDumpRetry @ 0x14054E3E0
 * Callers:
 *     HvlAddPagesCallbackRoutine @ 0x140544F20 (HvlAddPagesCallbackRoutine.c)
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x140545040 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x140545098 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x1405452C0 (HvlAddSecureSkPagesCallbackRoutine.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405670E8 (KeValidateBugCheckCallbackRecord.c)
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
