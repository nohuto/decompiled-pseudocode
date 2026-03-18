/*
 * XREFs of SmStoreGetId @ 0x1405CDC00
 * Callers:
 *     SmKmCleanup @ 0x1409D8798 (SmKmCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmStoreGetId(__int64 a1)
{
  return *(unsigned int *)(a1 + 6016);
}
