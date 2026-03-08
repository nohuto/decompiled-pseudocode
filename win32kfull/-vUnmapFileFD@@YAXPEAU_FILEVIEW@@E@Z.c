/*
 * XREFs of ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00BC6DC
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB9C0 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C0115154 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C011CB40 (EngUnmapFontFileFD.c)
 * Callees:
 *     ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z @ 0x1C00E9AF8 (-MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C011CC6C (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 */

void __fastcall vUnmapFileFD(struct _FILEVIEW *a1, char a2)
{
  UmfdHostLifeTimeManager::MmUnmapViewOfSection(*((void **)a1 + 2), *((_QWORD *)a1 + 9));
  if ( !*((_QWORD *)a1 + 1) && a2 )
    vUnreferenceFileviewSection(a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
