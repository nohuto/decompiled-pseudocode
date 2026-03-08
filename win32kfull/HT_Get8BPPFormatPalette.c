/*
 * XREFs of HT_Get8BPPFormatPalette @ 0x1C0252D80
 * Callers:
 *     HT_Get8BPPMaskPalette @ 0x1C0252E90 (HT_Get8BPPMaskPalette.c)
 *     NtGdiHT_Get8BPPFormatPalette @ 0x1C02CF0F0 (NtGdiHT_Get8BPPFormatPalette.c)
 * Callees:
 *     DivFD6 @ 0x1C014AF0C (DivFD6.c)
 */

LONG __stdcall HT_Get8BPPFormatPalette(
        LPPALETTEENTRY pPaletteEntry,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  int v4; // edi
  BYTE *p_peBlue; // r14
  int v6; // ebx
  int v7; // ebp
  unsigned int v8; // esi
  int v9; // eax

  if ( pPaletteEntry )
  {
    v4 = 0;
    p_peBlue = &pPaletteEntry->peBlue;
    v6 = 0;
    v7 = 216;
    v8 = 0;
    do
    {
      --v7;
      *(p_peBlue - 2) = (char)(32 - DivFD6(v8, 5)) / 64;
      *(p_peBlue - 1) = (char)(32 - DivFD6(v6, 5)) / 64;
      v9 = DivFD6(v4, 5);
      ++v8;
      p_peBlue[1] = 0;
      *p_peBlue = (255 * v9 + 500000) / 1000000;
      p_peBlue += 4;
      if ( v8 > 5 )
      {
        v8 = 0;
        if ( (unsigned int)++v6 > 5 )
        {
          v6 = 0;
          ++v4;
        }
      }
    }
    while ( v7 );
  }
  return 216;
}
