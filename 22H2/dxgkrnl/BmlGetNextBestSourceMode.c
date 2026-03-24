/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1C0147254
 * Callers:
 *     BmlFunctionalizePath @ 0x1C0142E64 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0146674 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C00097B0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000C40C (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C01474DC (BmlDoesSourceModeObeyConstraint.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C0147638 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareSourceModes @ 0x1C014766C (BmlCompareSourceModes.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v6; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // r13
  int v21; // eax
  __int64 v22; // rcx
  unsigned int BitsPerPixel; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+70h] [rbp+8h]

  v6 = a3;
  if ( !a4 )
  {
    v34 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !a6 )
  {
    v35 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( !a2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v36);
  }
  v10 = WdLogNewEntry5_WdTrace(a1, a2);
  v12 = a5;
  v13 = 0LL;
  v14 = 104 * v6;
  *(_QWORD *)(v10 + 24) = a4;
  *(_QWORD *)(v10 + 32) = a5;
  *a6 = -1;
  if ( a5 == -1
    || (v13 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById(a4 + 24, a5)) != 0
    && (unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v6) )
  {
    v15 = a4 + 48;
    *(_QWORD *)(a1 + v14 + 92) = 0LL;
    v16 = *(_QWORD *)(a4 + 48);
    v17 = 0LL;
    v39 = v15;
    if ( v16 == v15 )
      return 3223192326LL;
    v18 = v16 - 8;
    if ( !v18 )
      return 3223192326LL;
    do
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v12);
      v20[3] = *(unsigned int *)(v18 + 24);
      v20[4] = *(unsigned int *)(v18 + 76);
      v20[5] = *(unsigned int *)(v18 + 80);
      v21 = *(_DWORD *)(v18 + 72);
      v22 = (unsigned int)(v21 - 1);
      if ( (v22 & 0xFFFFFFFC) != 0 || v21 == 2 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v22, v19);
        WdLogEvent5_WdAssertion(v37);
      }
      BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v18 + 96));
      v26 = BitsPerPixel;
      if ( !BitsPerPixel )
      {
        v27 = WdLogNewEntry5_WdTrace(v25, v24);
        v25 = *(int *)(v18 + 96);
        *(_QWORD *)(v27 + 24) = v25;
      }
      v20[6] = v26;
      v20[7] = *(int *)(v18 + 96);
      ++*(_DWORD *)(a1 + v14 + 92);
      if ( v13 != v18
        && ((*(_DWORD *)(a1 + 4) & 0x20000) != 0
         || (*(_DWORD *)(a1 + 8) & 4) != 0
         || (**(_QWORD **)(a1 + v14 + 16) & 0x80000000000000LL) != 0
         || (unsigned int)BmlCompareModeExtents(v18 + 76, v14 + a1 + 36) != 1)
        && (unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v6)
        && ((v33 = *(_QWORD *)(a1 + v14 + 16), !*(_BYTE *)(v33 + 129))
         || (*(_DWORD *)v33 & 0x20008) != 0x20000LL
         || *(_DWORD *)(v18 + 96) == 21) )
      {
        v28 = a2;
        ++*(_DWORD *)(a1 + v14 + 96);
        if ( (unsigned int)BmlCompareSourceModes(a1, a2, (unsigned __int16)v6, v18, (__int64)v17) == 1
          && (!v13 || (unsigned int)BmlCompareSourceModes(a1, a2, (unsigned __int16)v6, v18, v13) == -1) )
        {
          WdLogNewEntry5_WdTrace(v11, v12);
          v17 = (_DWORD *)v18;
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(v25, v24);
        v28 = a2;
      }
      v29 = *(_QWORD *)(v18 + 8);
      v18 = v29 - 8;
      if ( v29 == v39 )
        v18 = 0LL;
    }
    while ( v18 );
    if ( v17 )
    {
      v30 = *(_QWORD *)(v28 + 48);
      *a6 = v17[6];
      v31 = *(_QWORD *)(v30 + 8);
      if ( !v31 )
      {
        v38 = WdLogNewEntry5_WdAssertion(a6, v12);
        WdLogEvent5_WdAssertion(v38);
        v31 = *(_QWORD *)(v30 + 8);
      }
      DxgkLogCodePointPacket(0x20u, v6, v17[19], v17[20], *(_QWORD *)(*(_QWORD *)(v31 + 16) + 316LL));
      return 0LL;
    }
    else
    {
      return 3223192326LL;
    }
  }
  else
  {
    WdLogNewEntry5_WdTrace(v11, v12);
    return 3223192336LL;
  }
}
