/*
 * XREFs of _PopulateDisplayModeFromPresentPath @ 0x1C02FC6CC
 * Callers:
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02FA220 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A260 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C016CC80 (ConvertDMMScalingToGdiScaling.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C0172AAC (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C01E6480 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

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
