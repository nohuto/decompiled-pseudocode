/*
 * XREFs of vUnmapFontCacheFile @ 0x1C00E661C
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00E6588 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x1C0288E4C (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C0288FC8 (bReAllocCacheFile.c)
 * Callees:
 *     vUnmapFile @ 0x1C00E667C (vUnmapFile.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *result; // rax

  v0 = qword_1C033ABE8;
  if ( *(_QWORD *)(qword_1C033ABE8 + 80) )
  {
    if ( *(_QWORD *)qword_1C033ABE8 )
    {
      v1 = *(_QWORD *)(qword_1C033ABE8 + 96);
      *(_QWORD *)(qword_1C033ABE8 + 96) = 0LL;
      vUnmapFile((struct _FILEVIEW *)(v0 + 48));
      v2 = (_QWORD *)qword_1C033ABE8;
      result = memset((void *)(qword_1C033ABE8 + 48), 0, 0x50uLL);
      *v2 = 0LL;
      v2[12] = v1;
    }
  }
  return result;
}
