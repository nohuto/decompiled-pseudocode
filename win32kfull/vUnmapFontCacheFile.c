/*
 * XREFs of vUnmapFontCacheFile @ 0x1C00B812C
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00B8080 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x1C028C900 (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C028CAF0 (bReAllocCacheFile.c)
 * Callees:
 *     vUnmapFile @ 0x1C00B81B4 (vUnmapFile.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

_QWORD *__fastcall vUnmapFontCacheFile(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *result; // rax
  __int64 v3; // rbx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  result = *(_QWORD **)(v1 + 19392);
  if ( result[10] )
  {
    if ( *result )
    {
      v3 = result[12];
      result[12] = 0LL;
      vUnmapFile((struct _FILEVIEW *)(*(_QWORD *)(v1 + 19392) + 48LL));
      memset_0((void *)(*(_QWORD *)(v1 + 19392) + 48LL), 0, 0x50uLL);
      *(_QWORD *)(*(_QWORD *)(v1 + 19392) + 96LL) = v3;
      result = *(_QWORD **)(v1 + 19392);
      *result = 0LL;
    }
  }
  return result;
}
