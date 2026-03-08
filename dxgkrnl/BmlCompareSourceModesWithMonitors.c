/*
 * XREFs of BmlCompareSourceModesWithMonitors @ 0x1C0170E88
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C01706B0 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModes @ 0x1C03B86F4 (BmlCompareSourceModes.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C00028F0 (--$DIFF@H@@YAHHH@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C0170E38 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C0170E6C (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C017104C (BmlGetModeCategoryForRegion.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C0171118 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithMonitors(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r8
  __int64 v7; // rcx
  char v8; // r13
  unsigned int *v9; // rbx
  char v10; // r15
  unsigned int v11; // edx
  _DWORD *v12; // rdi
  bool v13; // al
  const struct _D3DKMDT_2DREGION *v14; // rbp
  const struct _D3DKMDT_2DREGION *v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rcx
  unsigned int ModeCategoryForRegion; // eax
  __int64 v19; // r8
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int64 result; // rax
  __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // ebx
  unsigned int v27; // eax
  int v28; // edi
  int ScaledAspectRatio; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // eax
  __int64 v33; // [rsp+30h] [rbp-48h]
  __int64 v34; // [rsp+80h] [rbp+8h]
  unsigned int *v35; // [rsp+90h] [rbp+18h]

  v5 = a2;
  v7 = 120LL * a2;
  v8 = 0;
  v33 = a2;
  v34 = v7;
  v9 = (unsigned int *)(v7 + a1 + 52);
  v10 = 0;
  v35 = v9;
  v11 = *v9;
  v12 = v9 + 1;
  v13 = *v9 && *v12;
  v14 = (const struct _D3DKMDT_2DREGION *)(a4 + 76);
  if ( v13 )
  {
    if ( v14->cx == v11 && *(_DWORD *)(a4 + 80) == *v12 )
      v8 = 1;
    v15 = (const struct _D3DKMDT_2DREGION *)(a5 + 76);
    if ( *(_DWORD *)(a5 + 76) == v11 && *(_DWORD *)(a5 + 80) == *v12 )
      v10 = 1;
  }
  else
  {
    v15 = (const struct _D3DKMDT_2DREGION *)(a5 + 76);
  }
  v16 = v7 + a1;
  v17 = *(unsigned int *)(v7 + a1 + 36);
  if ( (_DWORD)v17 && *(_DWORD *)(v16 + 40) )
  {
    LOBYTE(v5) = v10;
    ModeCategoryForRegion = BmlGetModeCategoryForRegion(v15, v16 + 36, v5);
    LOBYTE(v19) = v8;
    v20 = ModeCategoryForRegion;
    v21 = BmlGetModeCategoryForRegion(v14, v16 + 36, v19);
    result = BmlCompareValues<unsigned int>(v21, v20);
    if ( (_DWORD)result )
      return result;
    v9 = v35;
  }
  else
  {
    WdLogSingleEntry4(3LL, a1, v5, v17, *(unsigned int *)(v16 + 40));
  }
  if ( !*v9 || !*v12 )
  {
    WdLogSingleEntry4(3LL, a1, v33, *v9, (unsigned int)*v12);
    return 0LL;
  }
  LOBYTE(v23) = v8;
  v24 = BmlGetModeCategoryForRegion(v14, v9, v23);
  LOBYTE(v25) = v10;
  v26 = v24;
  v27 = BmlGetModeCategoryForRegion(v15, v35, v25);
  result = BmlCompareValues<unsigned int>(v26, v27);
  if ( !(_DWORD)result )
  {
    if ( v26 == 3 )
    {
      v28 = *(_DWORD *)(v34 + a1 + 60);
      ScaledAspectRatio = BmlGetScaledAspectRatio(v14);
      v30 = DIFF<int>(ScaledAspectRatio, v28);
      v31 = BmlGetScaledAspectRatio(v15);
      v32 = DIFF<int>(v31, v28);
      return BmlCompareValues<int>(v32, v30);
    }
    return 0LL;
  }
  return result;
}
