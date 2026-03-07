__int64 __fastcall PopulateDisplayModeFromPresentPath(
        unsigned int *a1,
        unsigned int *a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        struct _D3DDDI_RATIONAL *a9,
        _BYTE *a10)
{
  __int64 v12; // rbp
  UINT Numerator; // eax
  unsigned __int8 *v15; // r8
  __int64 result; // rax

  v12 = a4;
  *a10 = 0;
  a9[1].Numerator = a1[7];
  a9->Numerator = a1[4];
  a9->Denominator = a1[5];
  a9[3].Numerator = (int)(a2[14] << 29) >> 29;
  Numerator = a9[5].Numerator;
  a9[4].Denominator = a9[4].Denominator & 0xFFFFFFFC | a5 & 1;
  a9[5].Numerator = (a7 != 0 ? 0x80 : 0) | a8 & 0xF | Numerator & 0x100 | (a6 != 0 ? 0x40 : 0);
  DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a2 + 2), a9 + 2);
  a9[1].Denominator = DmmMapVSyncFromRationalToInteger(
                        a9 + 2,
                        (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(a2[14] << 29) >> 29),
                        v15);
  ConvertDMMScalingToGdiScaling(a3, &a9[4]);
  result = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v12) - 1;
  if ( !(_DWORD)result )
    goto LABEL_6;
  result = (unsigned int)(result - 1);
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 1 )
      {
        result = WdLogSingleEntry3(3LL, v12, *a1, *a2);
LABEL_6:
        a9[3].Denominator = 1;
        goto LABEL_7;
      }
      a9[3].Denominator = 4;
    }
    else
    {
      a9[3].Denominator = 3;
    }
  }
  else
  {
    a9[3].Denominator = 2;
  }
LABEL_7:
  if ( a1[1] != 3 )
  {
    if ( a1[1] != 4 )
      return result;
    a9[5].Numerator |= 0x20u;
  }
  a9[5].Numerator |= 0x10u;
  a9[4].Denominator |= 1u;
  return result;
}
