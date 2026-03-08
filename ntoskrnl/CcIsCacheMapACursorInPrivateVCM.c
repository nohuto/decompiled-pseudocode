/*
 * XREFs of CcIsCacheMapACursorInPrivateVCM @ 0x1402191A4
 * Callers:
 *     CcShouldLazyWriteCacheMap @ 0x140219060 (CcShouldLazyWriteCacheMap.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsCacheMapACursorInPrivateVCM(__int64 a1, __int64 a2)
{
  return a2 == a1 + 72 || a2 == a1 + 96;
}
