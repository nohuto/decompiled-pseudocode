/*
 * XREFs of FioFwReadUshortAtOffset @ 0x1403AE01C
 * Callers:
 *     RaspLoadBearings @ 0x1403ADE2C (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x1403ADF80 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x1403AE050 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1403AE92C (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1405C5A1C (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x1405C60D0 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403AE41C (FioFwReadBytesAtOffset.c)
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
