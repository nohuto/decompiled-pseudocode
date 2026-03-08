/*
 * XREFs of ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01FF654
 * Callers:
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFA0C (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0091230 (GreGetBitmapBitsSize.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C00CE804 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     _SelectPalette @ 0x1C0125A20 (_SelectPalette.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C01FEA38 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     xxxRealizePalette @ 0x1C0217A18 (xxxRealizePalette.c)
 *     GreSetDIBits @ 0x1C02E0580 (GreSetDIBits.c)
 */

__int64 __fastcall xxxDIBtoBMP(const struct tagBITMAPINFO *a1, __int64 a2, unsigned int a3)
{
  DWORD biSize; // edi
  unsigned int BitmapBitsSize; // eax
  __int64 v8; // r11
  unsigned int biWidth_low; // r14d
  unsigned int biWidth_high; // ebp
  WORD biHeight_high; // r15
  char *v12; // r12
  __int64 v13; // rsi
  HDC CompatibleDC; // rdi
  __int64 ScreenBitmap; // rax
  __int64 v16; // r14
  __int64 v17; // r15

  biSize = a1->bmiHeader.biSize;
  if ( !(unsigned int)GreGetBitmapSizeInternal(a1, 0, a1->bmiHeader.biSize) )
    return 0LL;
  BitmapBitsSize = GreGetBitmapBitsSize((__int64)a1);
  if ( !BitmapBitsSize || BitmapBitsSize + (unsigned int)v8 < BitmapBitsSize || a3 < BitmapBitsSize + (unsigned int)v8 )
    return 0LL;
  if ( biSize != 40 )
  {
    if ( biSize == 12 )
    {
      biWidth_low = LOWORD(a1->bmiHeader.biWidth);
      biWidth_high = HIWORD(a1->bmiHeader.biWidth);
      biHeight_high = HIWORD(a1->bmiHeader.biHeight);
      goto LABEL_9;
    }
    return 0LL;
  }
  biWidth_low = a1->bmiHeader.biWidth;
  biWidth_high = a1->bmiHeader.biHeight;
  biHeight_high = a1->bmiHeader.biBitCount;
LABEL_9:
  v12 = (char *)a1 + v8;
  v13 = 0LL;
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  if ( CompatibleDC )
  {
    ScreenBitmap = CreateScreenBitmap(biWidth_low, biWidth_high, biHeight_high);
    v13 = ScreenBitmap;
    if ( ScreenBitmap )
    {
      v16 = 0LL;
      v17 = GreSelectBitmap(CompatibleDC, ScreenBitmap);
      if ( a2 )
      {
        v16 = SelectPalette((__int64)CompatibleDC, a2, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSetDIBits(CompatibleDC, (__int64)v12, (__int64)a1);
      if ( v16 )
      {
        SelectPalette((__int64)CompatibleDC, v16, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSelectBitmap(CompatibleDC, v17);
    }
    GreDeleteDC(CompatibleDC);
  }
  return v13;
}
