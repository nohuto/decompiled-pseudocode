/*
 * XREFs of ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C0219BAC
 * Callers:
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219D30 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C0027318 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     GreGetBitmapBitsSize @ 0x1C0029854 (GreGetBitmapBitsSize.c)
 *     _SelectPalette @ 0x1C00EE130 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C0147070 (xxxRealizePalette.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C02194F8 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     GreSetDIBits @ 0x1C02BFD38 (GreSetDIBits.c)
 */

HSURF __fastcall xxxDIBtoBMP(const struct tagBITMAPINFO *a1, __int64 a2, unsigned int a3)
{
  DWORD biSize; // edi
  unsigned int BitmapBitsSize; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r11
  unsigned int biWidth_low; // r14d
  unsigned int biWidth_high; // ebp
  WORD biHeight_high; // r15
  char *v15; // r12
  HSURF v16; // rsi
  HDC CompatibleDC; // rdi
  __int64 ScreenBitmap; // rax
  __int64 v19; // r14
  __int64 v20; // r15

  biSize = a1->bmiHeader.biSize;
  if ( !(unsigned int)GreGetBitmapSizeInternal(a1, 0, a1->bmiHeader.biSize) )
    return 0LL;
  BitmapBitsSize = GreGetBitmapBitsSize((__int64)a1);
  if ( !BitmapBitsSize || BitmapBitsSize + (unsigned int)v11 < BitmapBitsSize || a3 < BitmapBitsSize + (unsigned int)v11 )
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
  v15 = (char *)a1 + v11;
  v16 = 0LL;
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), v8, v9, v10);
  if ( CompatibleDC )
  {
    ScreenBitmap = CreateScreenBitmap(biWidth_low, biWidth_high, biHeight_high);
    v16 = (HSURF)ScreenBitmap;
    if ( ScreenBitmap )
    {
      v19 = 0LL;
      v20 = GreSelectBitmap(CompatibleDC, ScreenBitmap);
      if ( a2 )
      {
        v19 = SelectPalette((__int64)CompatibleDC, a2, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSetDIBits(CompatibleDC, v16, (__int64)v15, (__int64)a1);
      if ( v19 )
      {
        SelectPalette((__int64)CompatibleDC, v19, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSelectBitmap(CompatibleDC, v20);
    }
    GreDeleteDC(CompatibleDC);
  }
  return v16;
}
