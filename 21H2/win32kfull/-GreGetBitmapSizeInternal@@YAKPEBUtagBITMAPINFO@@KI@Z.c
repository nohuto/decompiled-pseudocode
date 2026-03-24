/*
 * XREFs of ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C00802D8
 * Callers:
 *     NtGdiGetDIBitsInternal @ 0x1C007FE00 (NtGdiGetDIBitsInternal.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C00AC054 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     NtGdiStretchDIBitsInternal @ 0x1C00ADDC0 (NtGdiStretchDIBitsInternal.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C021EEB8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetBitmapSizeInternal(const struct tagBITMAPINFO *a1, int a2, unsigned int a3)
{
  unsigned int v3; // r11d
  int v5; // r9d
  DWORD biCompression; // eax
  int v7; // edi
  WORD biBitCount; // bx
  DWORD biClrUsed; // edx
  int biHeight_high; // ecx
  int v11; // eax
  unsigned int v12; // eax
  __int64 result; // rax
  int v14; // eax

  v3 = a3;
  if ( !a1 )
    return 0LL;
  v5 = 2;
  if ( a3 == 12 )
  {
    biHeight_high = HIWORD(a1->bmiHeader.biHeight);
    v7 = 3;
    biClrUsed = 0;
    v3 = 12;
    goto LABEL_6;
  }
  if ( a3 < 0x28 )
    return 0LL;
  biCompression = a1->bmiHeader.biCompression;
  v7 = 4;
  biBitCount = a1->bmiHeader.biBitCount;
  biClrUsed = a1->bmiHeader.biClrUsed;
  biHeight_high = biBitCount;
  if ( biCompression == 3 )
  {
    v14 = 0;
    if ( a2 != 1 )
      v14 = a2;
    a2 = v14;
    if ( biBitCount != 16 && biBitCount != 32 )
      return 0LL;
    biClrUsed = 3;
    if ( a3 > 0x28 )
      biClrUsed = 0;
    v12 = biClrUsed;
    goto LABEL_14;
  }
  if ( biCompression )
  {
    if ( biCompression == 10 )
    {
      switch ( biBitCount )
      {
        case 1u:
          goto LABEL_37;
        case 4u:
          goto LABEL_39;
        case 8u:
          goto LABEL_29;
        case 0x20u:
          goto LABEL_50;
      }
    }
    else
    {
      if ( biCompression != 2 )
      {
        if ( biCompression == 1 )
          goto LABEL_28;
        if ( biCompression != 12 )
        {
          if ( biCompression == 11 )
          {
LABEL_28:
            if ( biBitCount == 8 )
              goto LABEL_29;
            return 0LL;
          }
          if ( biCompression - 4 > 1 )
            return 0LL;
LABEL_50:
          v12 = 0;
          goto LABEL_14;
        }
      }
      if ( biBitCount == 4 )
        goto LABEL_39;
    }
    return 0LL;
  }
LABEL_6:
  switch ( biHeight_high )
  {
    case 1:
LABEL_37:
      v12 = 2;
      goto LABEL_14;
    case 4:
LABEL_39:
      v12 = 16;
      goto LABEL_14;
    case 8:
LABEL_29:
      v12 = 256;
      goto LABEL_14;
  }
  v11 = 0;
  if ( a2 != 1 )
    v11 = a2;
  a2 = v11;
  v12 = 0;
  if ( biHeight_high != 24 && biHeight_high != 16 && biHeight_high != 32 )
    return 0LL;
LABEL_14:
  if ( biClrUsed )
  {
    if ( biClrUsed > v12 )
      biClrUsed = v12;
  }
  else
  {
    biClrUsed = v12;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v7 = 0;
    v5 = v7;
  }
  result = (v5 * biClrUsed + v3 + 3) & 0xFFFFFFFC;
  if ( (unsigned int)result < v3 )
    return 0LL;
  return result;
}
