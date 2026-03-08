/*
 * XREFs of FioFwReadBytesAtOffset @ 0x140383778
 * Callers:
 *     RaspLoadBearings @ 0x14038307C (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x140383398 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x1403833CC (RaspInitializeGlyphData.c)
 *     FioFwReadUlongAtOffset @ 0x1403843C4 (FioFwReadUlongAtOffset.c)
 *     RaspInitializeCompositeGlyphData @ 0x1406711FC (RaspInitializeCompositeGlyphData.c)
 *     BgpRasInitializeRasterizer @ 0x140B98F30 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x140B9952C (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140B99654 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140B996C4 (FopGetTableOffsetAndSize.c)
 *     FopReadMappingTable @ 0x140B99898 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140B99A68 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140B99BEC (FopReadCmapTable.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
