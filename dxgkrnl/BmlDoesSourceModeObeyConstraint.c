/*
 * XREFs of BmlDoesSourceModeObeyConstraint @ 0x1C0170C60
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C01706B0 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C03B88CC (BmlCompareSourceModesWithConstraint.c)
 *     _BmlGetPathModeListForPath @ 0x1C03B98CC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01710A4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1C01710D8 (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 */

bool __fastcall BmlDoesSourceModeObeyConstraint(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  bool v7; // bl
  unsigned int v8; // eax
  unsigned int v9; // r15d
  int v10; // ecx
  bool v11; // zf
  _DWORD *v12; // rbx
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  int v16; // eax

  v4 = 120LL * a2;
  v6 = *(_QWORD *)(v4 + a1 + 16);
  v7 = (*(_QWORD *)v6 & 0x18000000100LL) == 0 && !_bittest((const signed __int32 *)(a1 + 4), 0x12u);
  if ( (*(_QWORD *)v6 & 0x10000000100LL) != 0 )
  {
    if ( (*(_BYTE *)(v4 + a1 + 132) & 8) != 0 )
    {
      if ( *(_BYTE *)(v6 + 128) )
        return 0;
    }
    else
    {
      v8 = 2;
      if ( *(_BYTE *)(v6 + 128) )
        goto LABEL_9;
    }
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x40000) == 0 )
  {
LABEL_8:
    v8 = 1;
    goto LABEL_9;
  }
  v8 = (~*(_BYTE *)(v4 + a1 + 132) & 8 | 4u) >> 2;
LABEL_9:
  v9 = *(_DWORD *)(v4 + a1 + 120);
  if ( !a3 )
    return 0;
  v10 = a3[18];
  if ( v8 == 2 )
  {
    if ( (unsigned int)(v10 - 3) > 1 )
      return 0;
    if ( v10 != 1 && v10 != 3 && v10 != 4 )
      WdLogSingleEntry0(1LL);
  }
  else
  {
    if ( v8 == 1 )
    {
      v11 = v10 == 1;
    }
    else
    {
      if ( v10 == 1 || v10 == 3 )
        goto LABEL_14;
      v11 = v10 == 4;
    }
    if ( !v11 )
      return 0;
  }
LABEL_14:
  v11 = !v7;
  v12 = a3 + 24;
  if ( !v11 && *v12 != 21 && *v12 != 22 )
  {
    if ( *v12 == 31 )
    {
LABEL_20:
      if ( (unsigned __int8)BmlPixelFormatMatchHdrPixelFormat((unsigned int)*v12, v9, 0LL) )
        goto LABEL_21;
      return 0;
    }
    if ( *v12 != 32 )
    {
      if ( *v12 != 113 )
        return 0;
      goto LABEL_20;
    }
  }
LABEL_21:
  v13 = a3 + 19;
  if ( _bittest64((const signed __int64 *)v6, 0x26u) && (unsigned int)BmlCompareModeExtents(v4 + a1 + 52, v13) )
    return 0;
  v14 = *(_QWORD *)(v6 + 8);
  if ( (v14 & 0x8000000100LL) != 0 )
  {
    v16 = *(_DWORD *)(v6 + 116);
    if ( v16 )
    {
      if ( *v12 != v16 )
        return 0;
    }
  }
  if ( (v14 & 0x100) == 0 )
    return 1;
  if ( *v13 != *(_DWORD *)(v6 + 96) )
    return 0;
  return a3[20] == *(_DWORD *)(v6 + 100);
}
