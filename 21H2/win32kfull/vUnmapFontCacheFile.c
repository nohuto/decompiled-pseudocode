/*
 * XREFs of vUnmapFontCacheFile @ 0x1C00EF388
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00EF2F4 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x1C0285D80 (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C0285EFC (bReAllocCacheFile.c)
 * Callees:
 *     vUnmapFile @ 0x1C00EF3E8 (vUnmapFile.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *result; // rax

  v0 = qword_1C0335DA8;
  if ( *(_QWORD *)(qword_1C0335DA8 + 80) )
  {
    if ( *(_QWORD *)qword_1C0335DA8 )
    {
      v1 = *(_QWORD *)(qword_1C0335DA8 + 96);
      *(_QWORD *)(qword_1C0335DA8 + 96) = 0LL;
      vUnmapFile((struct _FILEVIEW *)(v0 + 48));
      v2 = (_QWORD *)qword_1C0335DA8;
      result = memset((void *)(qword_1C0335DA8 + 48), 0, 0x50uLL);
      *v2 = 0LL;
      v2[12] = v1;
    }
  }
  return result;
}
