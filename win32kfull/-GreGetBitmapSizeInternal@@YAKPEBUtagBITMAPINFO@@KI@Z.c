__int64 __fastcall GreGetBitmapSizeInternal(const struct tagBITMAPINFO *a1, int a2, unsigned int a3)
{
  int v4; // edi
  int biBitCount; // esi
  DWORD biCompression; // eax
  int biHeight_high; // edx
  DWORD biClrUsed; // ecx
  int v9; // r11d
  int v10; // eax
  unsigned int v11; // eax
  __int64 result; // rax
  int v13; // eax

  if ( !a1 )
    return 0LL;
  v4 = 2;
  if ( a3 == 12 )
  {
    biHeight_high = HIWORD(a1->bmiHeader.biHeight);
    a3 = 12;
    biClrUsed = 0;
    v9 = 3;
    goto LABEL_6;
  }
  if ( a3 < 0x28 )
    return 0LL;
  biBitCount = a1->bmiHeader.biBitCount;
  biCompression = a1->bmiHeader.biCompression;
  biHeight_high = biBitCount;
  biClrUsed = a1->bmiHeader.biClrUsed;
  if ( biCompression == 3 )
  {
    v13 = 0;
    if ( a2 != 1 )
      v13 = a2;
    a2 = v13;
    if ( (_WORD)biBitCount != 16 && (_WORD)biBitCount != 32 )
      return 0LL;
    biClrUsed = 3;
    v9 = 4;
    if ( a3 > 0x28 )
      biClrUsed = 0;
    v11 = biClrUsed;
    goto LABEL_14;
  }
  v9 = 4;
  if ( biCompression )
  {
    switch ( biCompression )
    {
      case 0xAu:
        switch ( biBitCount )
        {
          case 1:
            goto LABEL_25;
          case 4:
            goto LABEL_33;
          case 8:
            goto LABEL_34;
          case 32:
LABEL_48:
            v11 = 0;
            goto LABEL_14;
        }
        break;
      case 2u:
      case 0xCu:
        if ( (_WORD)biBitCount == 4 )
          goto LABEL_33;
        break;
      case 1u:
      case 0xBu:
        if ( biBitCount == 8 )
          goto LABEL_34;
        break;
      default:
        if ( biCompression - 4 <= 1 )
          goto LABEL_48;
        break;
    }
    return 0LL;
  }
LABEL_6:
  switch ( biHeight_high )
  {
    case 1:
LABEL_25:
      v11 = 2;
      goto LABEL_14;
    case 4:
LABEL_33:
      v11 = 16;
      goto LABEL_14;
    case 8:
LABEL_34:
      v11 = 256;
      goto LABEL_14;
  }
  v10 = 0;
  if ( a2 != 1 )
    v10 = a2;
  a2 = v10;
  v11 = 0;
  if ( biHeight_high != 24 && biHeight_high != 16 && biHeight_high != 32 )
    return 0LL;
LABEL_14:
  if ( biClrUsed )
  {
    if ( biClrUsed > v11 )
      biClrUsed = v11;
  }
  else
  {
    biClrUsed = v11;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v9 = 0;
    v4 = v9;
  }
  result = (v4 * biClrUsed + a3 + 3) & 0xFFFFFFFC;
  if ( (unsigned int)result < a3 )
    return 0LL;
  return result;
}
