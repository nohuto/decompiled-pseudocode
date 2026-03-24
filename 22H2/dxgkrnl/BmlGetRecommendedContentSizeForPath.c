/*
 * XREFs of BmlGetRecommendedContentSizeForPath @ 0x1C02EC318
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C0142C78 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C005C1CC (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     BmlAreRawModesEnabled @ 0x1C0144944 (BmlAreRawModesEnabled.c)
 *     BmlGetModeCategoryForRegion @ 0x1C0147138 (BmlGetModeCategoryForRegion.c)
 *     BmlCompareRegionsWithPivot @ 0x1C01477DC (BmlCompareRegionsWithPivot.c)
 *     BmlIsSupportedSourceMode @ 0x1C02EC5AC (BmlIsSupportedSourceMode.c)
 */

__int64 __fastcall BmlGetRecommendedContentSizeForPath(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rbx
  unsigned int v14; // edi
  _QWORD *v15; // rbp
  UINT v16; // r14d
  UINT v17; // eax
  UINT v18; // r15d
  __int64 v19; // rax
  const struct DMMVIDPNSOURCEMODE *v20; // rdi
  const struct DMMVIDPNSOURCEMODE *NextMode; // rbp
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  _QWORD *v27; // rax
  struct _D3DKMDT_2DREGION v29; // [rsp+20h] [rbp-58h] BYREF
  char v30; // [rsp+80h] [rbp+8h]
  unsigned __int16 v31; // [rsp+88h] [rbp+10h]

  v31 = a2;
  v4 = (unsigned __int16)a2;
  v6 = a3;
  if ( !a1 || (unsigned __int16)a2 >= *a1 || !a3 || !a4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = 0x20000000020000LL;
  if ( (*(_QWORD *)a4 & 0x20000000020000LL) != 0x20000000020000LL )
  {
    v10 = WdLogNewEntry5_WdAssertion(0x20000000020000LL, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(v6 + 88);
  v12 = *(_QWORD *)(v11 + 104);
  if ( !v12 )
  {
    v13 = 0LL;
LABEL_11:
    v14 = -1071774968;
    goto LABEL_35;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
  v13 = *(_QWORD **)(v11 + 104);
  if ( !v13 )
    goto LABEL_11;
  v15 = (_QWORD *)v13[6];
  if ( v15 == v13 + 6 )
  {
    v14 = -1071774970;
    goto LABEL_35;
  }
  v16 = *(_DWORD *)(a4 + 152);
  v17 = *(_DWORD *)(a4 + 156);
  LOBYTE(v9) = ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) == 0;
  v30 = v9;
  if ( ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) != 0 )
  {
    v18 = *(_DWORD *)(a4 + 152);
    v29.cx = v18;
    v16 = v17;
    v29.cy = v17;
  }
  else
  {
    v18 = *(_DWORD *)(a4 + 156);
    v29.cx = v18;
    v29.cy = v16;
  }
  v19 = 104 * v4;
  v20 = 0LL;
  NextMode = (const struct DMMVIDPNSOURCEMODE *)(v15 - 1);
  if ( !NextMode )
    goto LABEL_34;
  v22 = v19;
  do
  {
    LOBYTE(a2) = 1;
    if ( (unsigned __int8)BmlIsSupportedSourceMode(NextMode, a2)
      && (BmlAreRawModesEnabled((__int64)a1, v31)
       || (unsigned int)BmlGetModeCategoryForRegion((__int64)NextMode + 76, (__int64)&a1[v22 + 36]) != 1) )
    {
      if ( v20 )
      {
        if ( (unsigned int)BmlCompareRegionsWithPivot(
                             (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                             (struct _D3DKMDT_2DREGION *)((char *)v20 + 76),
                             &v29) != 1 )
          goto LABEL_28;
        if ( *((_DWORD *)v20 + 19) == v18 && *((_DWORD *)v20 + 20) == v16 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v24, v23);
          WdLogEvent5_WdAssertion(v25);
        }
      }
      v20 = NextMode;
    }
LABEL_28:
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v13, NextMode);
  }
  while ( NextMode );
  v6 = a3;
  if ( v20 )
  {
    if ( v30 )
    {
      *(_DWORD *)(a4 + 160) = *((_DWORD *)v20 + 20);
      v26 = *((_DWORD *)v20 + 19);
    }
    else
    {
      *(_DWORD *)(a4 + 160) = *((_DWORD *)v20 + 19);
      v26 = *((_DWORD *)v20 + 20);
    }
    *(_DWORD *)(a4 + 164) = v26;
    v14 = 0;
    goto LABEL_35;
  }
LABEL_34:
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v9, a2);
  v14 = -1071774970;
  v27[3] = v18;
  v27[4] = v16;
  v27[5] = v6;
  v27[6] = -1071774970LL;
  WdLogEvent5_WdError(v27);
LABEL_35:
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 11), a2);
  return v14;
}
