/*
 * XREFs of IoIsPartialDumpRetry @ 0x140502348
 * Callers:
 *     HvlAddSecurePagesCallbackRoutine @ 0x1404F8550 (HvlAddSecurePagesCallbackRoutine.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140517AD8 (KeValidateBugCheckCallbackRecord.c)
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
