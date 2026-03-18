/*
 * XREFs of RaspClearCache @ 0x140AABB44
 * Callers:
 *     ResFwFreeContext @ 0x140AAB07C (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x140AABA70 (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x140AAD1C4 (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x140AAEAF4 (BgpTxtDestroyRegion.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x140AAE514 (RaspDestroyCachedBitmap.c)
 */

__int64 *RaspClearCache()
{
  __int64 *result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = (__int64 *)RaspBitmapCache;
    v1 = *(_QWORD *)RaspBitmapCache;
    if ( *(__int64 **)(RaspBitmapCache + 8) != &RaspBitmapCache || *(_QWORD *)(v1 + 8) != RaspBitmapCache )
      __fastfail(3u);
    RaspBitmapCache = *(_QWORD *)RaspBitmapCache;
    *(_QWORD *)(v1 + 8) = &RaspBitmapCache;
    if ( result == &RaspBitmapCache )
      break;
    RaspDestroyCachedBitmap(result);
  }
  dword_140C0DE94 = 0;
  return result;
}
