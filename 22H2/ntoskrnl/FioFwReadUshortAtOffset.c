/*
 * XREFs of FioFwReadUshortAtOffset @ 0x140385FE8
 * Callers:
 *     RaspLoadBearings @ 0x140385CCC (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x140385F4C (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x14038601C (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1403869FC (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14067351C (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x140673BB0 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403863C8 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUshortAtOffset(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 2LL, a3);
  if ( (int)result >= 0 )
  {
    *a3 = __ROR2__(*a3, 8);
    return 0LL;
  }
  return result;
}
