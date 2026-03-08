/*
 * XREFs of FioFwReadUshortAtOffset @ 0x140383398
 * Callers:
 *     RaspLoadBearings @ 0x14038307C (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x1403832FC (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x1403833CC (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x140383DAC (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x140670ECC (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x140671560 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140383778 (FioFwReadBytesAtOffset.c)
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
