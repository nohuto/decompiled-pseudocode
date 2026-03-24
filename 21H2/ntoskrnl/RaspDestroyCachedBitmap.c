/*
 * XREFs of RaspDestroyCachedBitmap @ 0x1409F4708
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403B1B48 (BgpRasPrintGlyph.c)
 *     RaspClearCache @ 0x1409F35FC (RaspClearCache.c)
 *     RaspAddCacheEntry @ 0x1409F46A4 (RaspAddCacheEntry.c)
 * Callees:
 *     RaspRectangleDestroy @ 0x1403B2324 (RaspRectangleDestroy.c)
 *     RaspFreeMemory @ 0x1403B2508 (RaspFreeMemory.c)
 */

void __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _DWORD *v4; // r9
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v6 = 0LL;
  RaspRectangleDestroy(v2, (__int64)&v5);
  RaspFreeMemory(a1, &v5, v3, v4);
}
