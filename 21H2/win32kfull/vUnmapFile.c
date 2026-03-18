/*
 * XREFs of vUnmapFile @ 0x1C00EF3E8
 * Callers:
 *     vUnmapFontCacheFile @ 0x1C00EF388 (vUnmapFontCacheFile.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C0286184 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     EngFreeModule @ 0x1C0286FD0 (EngFreeModule.c)
 *     EngUnmapFontFile @ 0x1C0287260 (EngUnmapFontFile.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C000D7F0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 */

void __fastcall vUnmapFile(PVOID *a1)
{
  MmUnmapViewInSessionSpace(a1[1]);
  if ( !a1[2] )
    vUnreferenceFileviewSection((struct _FILEVIEW *)a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
