/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1C01706B0
 * Callers:
 *     BmlFunctionalizePath @ 0x1C016DA58 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C00028F0 (--$DIFF@H@@YAHHH@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C00066E0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C0170C60 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetPixelFormatPreference @ 0x1C0170DBC (BmlGetPixelFormatPreference.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C0170E38 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C0170E6C (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C0170E88 (BmlCompareSourceModesWithMonitors.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01710A4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1C01710D8 (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     BmlCompareModeRegions @ 0x1C0171130 (BmlCompareModeRegions.c)
 *     ??$BmlCompareValues@_N@@YA?AW4BML_COMPARISON_RESULT@@_N0@Z @ 0x1C01DD75C (--$BmlCompareValues@_N@@YA-AW4BML_COMPARISON_RESULT@@_N0@Z.c)
 *     ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C03B85B4 (-BmlCompareModeResolution@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareSourceModes @ 0x1C03B86F4 (BmlCompareSourceModes.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v6; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbx
  _DWORD *v18; // r14
  __int64 v19; // rbx
  _QWORD *v20; // rdi
  int v21; // eax
  __int64 v22; // rdi
  bool v23; // si
  unsigned int *v24; // r15
  unsigned int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned int *v30; // rsi
  __int64 v31; // rcx
  int v32; // r10d
  int v33; // edi
  unsigned int v34; // edi
  int PixelFormatPreference; // esi
  int ScaledAspectRatio; // esi
  int v37; // eax
  unsigned int v38; // edi
  int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+90h] [rbp+8h]
  unsigned __int16 v44; // [rsp+A0h] [rbp+18h]
  __int64 v45; // [rsp+A8h] [rbp+20h]

  v44 = a3;
  v6 = (unsigned __int16)a3;
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)&v13 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *((_QWORD *)&v13 + 1) = a5;
  v14 = 0LL;
  v45 = 0LL;
  v15 = a1 + 120 * v6;
  *(_QWORD *)(v13 + 24) = a4;
  *(_QWORD *)(v13 + 32) = a5;
  *a6 = -1;
  if ( a5 != -1 )
  {
    *(_QWORD *)&v13 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById(a4 + 24, a5);
    v45 = v13;
    v14 = v13;
    if ( !(_QWORD)v13 || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v6, v13) )
    {
      WdLogNewEntry5_WdTrace(v10, *((_QWORD *)&v13 + 1), v11, v12);
      return 3223192336LL;
    }
  }
  v16 = a4 + 48;
  *(_QWORD *)(v15 + 92) = 0LL;
  v17 = *(_QWORD *)(a4 + 48);
  v18 = 0LL;
  v42 = 0LL;
  v41 = v16;
  if ( v17 == v16 )
    return 3223192326LL;
  v19 = v17 - 8;
  if ( !v19 )
    return 3223192326LL;
  do
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, *((_QWORD *)&v13 + 1), v11, v12);
    v20[3] = *(unsigned int *)(v19 + 24);
    v20[4] = *(unsigned int *)(v19 + 76);
    v20[5] = *(unsigned int *)(v19 + 80);
    LODWORD(v13) = *(_DWORD *)(v19 + 72);
    v10 = (unsigned int)(v13 - 1);
    if ( (v10 & 0xFFFFFFFC) != 0 || (_DWORD)v13 == 2 )
      WdLogSingleEntry0(1LL);
    v21 = *(_DWORD *)(v19 + 96);
    if ( v21 <= 41 && (v21 < 33 || v21 >= 41) )
    {
      *((_QWORD *)&v13 + 1) = 0x1C0000000uLL;
      switch ( v21 )
      {
        case 20:
          *(_QWORD *)&v13 = 24LL;
          break;
        case 21:
        case 22:
        case 32:
          *(_QWORD *)&v13 = 32LL;
          break;
        case 23:
          *(_QWORD *)&v13 = 16LL;
          break;
        case 41:
          *(_QWORD *)&v13 = 8LL;
          break;
        default:
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      *(_QWORD *)&v13 = WdLogNewEntry5_WdTrace(v10, *((_QWORD *)&v13 + 1), v11, v12);
      v10 = *(int *)(v19 + 96);
      *(_QWORD *)(v13 + 24) = v10;
      *(_QWORD *)&v13 = 0LL;
    }
    v20[6] = v13;
    v20[7] = *(int *)(v19 + 96);
    ++*(_DWORD *)(v15 + 92);
    if ( v14 == v19 )
      goto LABEL_45;
    *((_QWORD *)&v13 + 1) = *(unsigned int *)(a1 + 4);
    if ( (DWORD2(v13) & 0x20000) == 0
      && (*(_DWORD *)(a1 + 8) & 4) == 0
      && !_bittest64(*(const signed __int64 **)(v15 + 16), 0x37u)
      && (*(_DWORD *)(v19 + 76) > *(_DWORD *)(v15 + 36) || *(_DWORD *)(v19 + 80) > *(_DWORD *)(v15 + 40)) )
    {
      goto LABEL_45;
    }
    v22 = *(_QWORD *)(v15 + 16);
    v10 = *(_QWORD *)v22;
    v23 = (DWORD2(v13) & 0x40000) == 0 && (*(_QWORD *)v22 & 0x18000000100LL) == 0;
    if ( (*(_QWORD *)v22 & 0x10000000100LL) != 0 )
    {
      if ( (*(_BYTE *)(v15 + 132) & 8) != 0 )
      {
        if ( *(_BYTE *)(v22 + 128) )
          goto LABEL_44;
      }
      else if ( *(_BYTE *)(v22 + 128) )
      {
        v11 = *(unsigned int *)(v19 + 72);
        v24 = (unsigned int *)(v15 + 120);
        v25 = *(_DWORD *)(v15 + 120);
        if ( (unsigned int)(v11 - 3) > 1 )
          goto LABEL_43;
        goto LABEL_96;
      }
      v10 = *(unsigned int *)(v19 + 72);
      v24 = (unsigned int *)(v15 + 120);
LABEL_28:
      v25 = *v24;
      goto LABEL_31;
    }
    v10 = *(unsigned int *)(v19 + 72);
    v24 = (unsigned int *)(v15 + 120);
    if ( (DWORD2(v13) & 0x40000) == 0 )
      goto LABEL_28;
    *((_QWORD *)&v13 + 1) = *v24;
    v25 = *v24;
    if ( (~*(_BYTE *)(v15 + 132) & 8 | 4) != 4 )
    {
      v11 = (unsigned int)v10;
      if ( (_DWORD)v10 != 1 )
      {
        if ( (_DWORD)v10 != 3 )
        {
          if ( (_DWORD)v10 != 4 )
            goto LABEL_43;
LABEL_114:
          if ( (_DWORD)v11 != 4 )
            WdLogSingleEntry0(1LL);
          goto LABEL_32;
        }
LABEL_113:
        if ( (_DWORD)v11 == 3 )
          goto LABEL_32;
        goto LABEL_114;
      }
LABEL_96:
      if ( (_DWORD)v11 == 1 )
        goto LABEL_32;
      goto LABEL_113;
    }
LABEL_31:
    if ( (_DWORD)v10 != 1 )
      goto LABEL_43;
LABEL_32:
    if ( !v23 )
      goto LABEL_39;
    v10 = *(unsigned int *)(v19 + 96);
    v11 = (unsigned int)(*(_DWORD *)(v19 + 96) - 21);
    if ( *(_DWORD *)(v19 + 96) == 21 )
      goto LABEL_39;
    v11 = (unsigned int)(*(_DWORD *)(v19 + 96) - 22);
    if ( *(_DWORD *)(v19 + 96) == 22 )
      goto LABEL_39;
    if ( *(_DWORD *)(v19 + 96) != 31 )
    {
      v11 = (unsigned int)(*(_DWORD *)(v19 + 96) - 32);
      if ( *(_DWORD *)(v19 + 96) == 32 )
        goto LABEL_39;
      if ( *(_DWORD *)(v19 + 96) != 113 )
        goto LABEL_43;
    }
    if ( !(unsigned __int8)BmlPixelFormatMatchHdrPixelFormat(v10, v25, 0LL) )
      goto LABEL_43;
LABEL_39:
    if ( _bittest64((const signed __int64 *)v22, 0x26u) && (unsigned int)BmlCompareModeExtents(v15 + 52, v19 + 76)
      || (v26 = *(_QWORD *)(v22 + 8), v10 = 0x8000000100LL, (v26 & 0x8000000100LL) != 0)
      && (v10 = *(unsigned int *)(v22 + 116), (_DWORD)v10)
      && *(_DWORD *)(v19 + 96) != (_DWORD)v10
      || (v26 & 0x100) != 0
      && (*(_DWORD *)(v19 + 76) != *(_DWORD *)(v22 + 96) || *(_DWORD *)(v19 + 80) != *(_DWORD *)(v22 + 100)) )
    {
LABEL_43:
      v18 = (_DWORD *)v42;
LABEL_44:
      v14 = v45;
LABEL_45:
      WdLogNewEntry5_WdTrace(v10, *((_QWORD *)&v13 + 1), v11, v12);
      goto LABEL_46;
    }
    ++*(_DWORD *)(v15 + 96);
    LODWORD(v13) = a2;
    if ( !a2 )
    {
      WdLogSingleEntry0(1LL);
      LODWORD(v13) = 0;
    }
    v18 = (_DWORD *)v42;
    if ( v19 == v42 )
    {
      WdLogSingleEntry0(1LL);
      LODWORD(v13) = a2;
    }
    if ( !v42 )
      goto LABEL_88;
    v30 = *(unsigned int **)(v15 + 16);
    if ( *((_BYTE *)v30 + 129) && (*(_DWORD *)(a1 + 8) & 1) != 0 )
      goto LABEL_81;
    if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, v44, v19) )
      WdLogSingleEntry0(1LL);
    if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, v44, v42) )
      WdLogSingleEntry0(1LL);
    v31 = v30[29];
    v32 = 0;
    v33 = 0;
    if ( !(_DWORD)v31
      || (*((_QWORD *)&v13 + 1) = 0x8000000100LL, (*(_QWORD *)v30 & 0x8000000100LL) == 0)
      || (BYTE8(v13) = *(_DWORD *)(v42 + 96) == (_DWORD)v31,
          LOBYTE(v31) = *(_DWORD *)(v19 + 96) == (_DWORD)v31,
          (v33 = BmlCompareValues<bool>(v31, *((_QWORD *)&v13 + 1))) == 0) )
    {
      v10 = *v30;
      if ( (v10 & 0x100) != 0 )
      {
        v10 = *(unsigned int *)(v19 + 76);
        v11 = v30[24] * (unsigned __int64)v30[25];
        v12 = abs64(v10 * *(unsigned int *)(v19 + 80) - v11);
        v13 = (__int64)(*(unsigned int *)(v42 + 76) * (unsigned __int64)*(unsigned int *)(v42 + 80) - v11);
        *(_QWORD *)&v13 = (*((_QWORD *)&v13 + 1) ^ v13) - *((_QWORD *)&v13 + 1);
        if ( v12 == (_QWORD)v13 )
        {
          ScaledAspectRatio = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)v30 + 12);
          v37 = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(v19 + 76));
          v38 = DIFF<int>(v37, ScaledAspectRatio);
          v39 = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(v42 + 76));
          v40 = DIFF<int>(v39, ScaledAspectRatio);
          v33 = BmlCompareValues<int>(v40, v38);
        }
        else if ( v12 < (__int64)v13 )
        {
          v33 = 1;
        }
        else
        {
          v33 = v32;
          if ( v12 > (__int64)v13 )
            v33 = -1;
        }
      }
    }
    if ( !v33 )
    {
LABEL_81:
      if ( !*(_BYTE *)(*(_QWORD *)(v15 + 16) + 129LL)
        || (*(_BYTE *)(v15 + 124) & 1) == 0
        || (*(_DWORD *)(a1 + 8) & 3) == 0 && (unsigned int)BmlCompareModeExtents(v15 + 108, v15 + 52) != 1 )
      {
        goto LABEL_75;
      }
      BmlCompareModeResolution(v19 + 76, v15 + 108);
      if ( (unsigned int)BmlCompareModeResolution(v42 + 76, v15 + 108) == -1 )
      {
        if ( (_DWORD)v12 != -1 )
        {
          v33 = 1;
          goto LABEL_78;
        }
LABEL_75:
        v34 = *v24;
        PixelFormatPreference = BmlGetPixelFormatPreference(*(unsigned int *)(v42 + 96), *v24);
        LODWORD(v13) = BmlGetPixelFormatPreference(*(unsigned int *)(v19 + 96), v34);
        if ( (int)v13 > PixelFormatPreference )
        {
          v33 = 1;
          goto LABEL_78;
        }
        if ( (int)v13 >= PixelFormatPreference )
        {
          v33 = BmlCompareModeRegions(v19 + 76, v42 + 76);
          if ( v33 )
          {
            LODWORD(v13) = BmlCompareSourceModesWithMonitors(a1, v44, v11, v19, v42);
            if ( (_DWORD)v13 )
              v33 = v13;
          }
          goto LABEL_78;
        }
      }
      else if ( (_DWORD)v12 != -1 )
      {
        v33 = BmlCompareModeRegions(v42 + 76, v19 + 76);
        if ( v33 )
          goto LABEL_78;
        goto LABEL_75;
      }
      v33 = -1;
    }
LABEL_78:
    if ( v33 != 1 )
    {
      v14 = v45;
      goto LABEL_46;
    }
    LODWORD(v13) = a2;
LABEL_88:
    v14 = v45;
    if ( !v45 || (unsigned int)BmlCompareSourceModes(a1, v13, v44, v19, v45) == -1 )
    {
      WdLogNewEntry5_WdTrace(v10, *((_QWORD *)&v13 + 1), v11, v12);
      v18 = (_DWORD *)v19;
      v42 = v19;
    }
LABEL_46:
    v27 = *(_QWORD *)(v19 + 8);
    v19 = v27 - 8;
    if ( v27 == v41 )
      v19 = 0LL;
  }
  while ( v19 );
  if ( !v18 )
    return 3223192326LL;
  v28 = *(_QWORD *)(a2 + 48);
  *a6 = v18[6];
  if ( !*(_QWORD *)(v28 + 8) )
    WdLogSingleEntry0(1LL);
  DxgkLogCodePointPacket(0x20u, v44, v18[19], v18[20], *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) + 16LL) + 404LL));
  return 0LL;
}
