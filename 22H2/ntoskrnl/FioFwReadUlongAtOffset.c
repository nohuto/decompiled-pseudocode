/*
 * XREFs of FioFwReadUlongAtOffset @ 0x140387014
 * Callers:
 *     RaspMapGlyphIndexToLocation @ 0x140385F4C (RaspMapGlyphIndexToLocation.c)
 *     FopInitializeFonts @ 0x140B9DF5C (FopInitializeFonts.c)
 *     BgpFoInitialize @ 0x140B9E09C (BgpFoInitialize.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403863C8 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUlongAtOffset(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 4u, a3);
  if ( (int)result >= 0 )
  {
    *a3 = _byteswap_ulong(*a3);
    return 0LL;
  }
  return result;
}
