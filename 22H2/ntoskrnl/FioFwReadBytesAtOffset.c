/*
 * XREFs of FioFwReadBytesAtOffset @ 0x1403863C8
 * Callers:
 *     RaspLoadBearings @ 0x140385CCC (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x140385FE8 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x14038601C (RaspInitializeGlyphData.c)
 *     FioFwReadUlongAtOffset @ 0x140387014 (FioFwReadUlongAtOffset.c)
 *     RaspInitializeCompositeGlyphData @ 0x14067384C (RaspInitializeCompositeGlyphData.c)
 *     BgpRasInitializeRasterizer @ 0x140B9D144 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x140B9D740 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140B9D868 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140B9D8D8 (FopGetTableOffsetAndSize.c)
 *     FopReadMappingTable @ 0x140B9DAAC (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140B9DC7C (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140B9DE00 (FopReadCmapTable.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
