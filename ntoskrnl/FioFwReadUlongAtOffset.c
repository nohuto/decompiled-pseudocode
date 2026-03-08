/*
 * XREFs of FioFwReadUlongAtOffset @ 0x1403843C4
 * Callers:
 *     RaspMapGlyphIndexToLocation @ 0x1403832FC (RaspMapGlyphIndexToLocation.c)
 *     FopInitializeFonts @ 0x140B99D48 (FopInitializeFonts.c)
 *     BgpFoInitialize @ 0x140B99E88 (BgpFoInitialize.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140383778 (FioFwReadBytesAtOffset.c)
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
