/*
 * XREFs of vUnmapFontCacheFile @ 0x1C00E62CC
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00E6238 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x1C028881C (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C0288998 (bReAllocCacheFile.c)
 * Callees:
 *     vUnmapFile @ 0x1C00E632C (vUnmapFile.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *result; // rax

  v0 = qword_1C0339BE8;
  if ( *(_QWORD *)(qword_1C0339BE8 + 80) )
  {
    if ( *(_QWORD *)qword_1C0339BE8 )
    {
      v1 = *(_QWORD *)(qword_1C0339BE8 + 96);
      *(_QWORD *)(qword_1C0339BE8 + 96) = 0LL;
      vUnmapFile((struct _FILEVIEW *)(v0 + 48));
      v2 = (_QWORD *)qword_1C0339BE8;
      result = memset((void *)(qword_1C0339BE8 + 48), 0, 0x50uLL);
      *v2 = 0LL;
      v2[12] = v1;
    }
  }
  return result;
}
