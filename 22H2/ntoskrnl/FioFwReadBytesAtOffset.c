/*
 * XREFs of FioFwReadBytesAtOffset @ 0x1403AE41C
 * Callers:
 *     FioFwReadUlongAtOffset @ 0x1403AC61C (FioFwReadUlongAtOffset.c)
 *     RaspLoadBearings @ 0x1403ADE2C (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x1403AE01C (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x1403AE050 (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C5D54 (RaspInitializeCompositeGlyphData.c)
 *     FopReadMappingTable @ 0x140A96050 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A96228 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A963B4 (FopReadCmapTable.c)
 *     BgpRasInitializeRasterizer @ 0x140A96518 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x140A96730 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140A96858 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140A968C8 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
