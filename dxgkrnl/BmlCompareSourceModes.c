/*
 * XREFs of BmlCompareSourceModes @ 0x1C03B86F4
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C01706B0 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     BmlCompareSourceModesWithMonitors @ 0x1C0170E88 (BmlCompareSourceModesWithMonitors.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01710A4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareModeRegions @ 0x1C0171130 (BmlCompareModeRegions.c)
 *     ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C03B85B4 (-BmlCompareModeResolution@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlComparePixelFormats @ 0x1C03B8658 (BmlComparePixelFormats.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C03B88CC (BmlCompareSourceModesWithConstraint.c)
 */

__int64 __fastcall BmlCompareSourceModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 result; // rax
  __int64 v10; // rbx
  _DWORD *v11; // r14
  int *v12; // r10
  int *v13; // r10
  int *v14; // r11
  int v15; // eax
  unsigned int *v16; // r11
  int v17; // r9d
  unsigned int v18; // r9d
  unsigned int v19; // ebx
  __int64 v20; // r8
  unsigned int v21; // eax
  int v22; // eax
  int *v23; // r10
  int *v24; // r11
  int v25; // eax
  int v26; // r9d

  v5 = a3;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( a4 == a5 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return 1LL;
  v10 = 120 * v5;
  v11 = (_DWORD *)(a1 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(120 * v5 + a1 + 16) + 129LL) && (*v11 & 1) != 0
    || (result = BmlCompareSourceModesWithConstraint(a1, (unsigned __int16)v5, a4, a5), !(_DWORD)result) )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(v10 + a1 + 16) + 129LL) )
      goto LABEL_21;
    if ( (*(_BYTE *)(v10 + a1 + 124) & 1) == 0 )
      goto LABEL_21;
    v12 = (int *)(v10 + a1 + 108);
    if ( (*v11 & 3) == 0 && (unsigned int)BmlCompareModeExtents((int *)(v10 + a1 + 108), (_DWORD *)(v10 + a1 + 52)) != 1 )
      goto LABEL_21;
    if ( (unsigned int)BmlCompareModeResolution((int *)(a5 + 76), v12) == -1
      || (v15 = BmlCompareModeResolution(v14, v13), v15 == v17) )
    {
      v22 = BmlCompareModeResolution((int *)(a5 + 76), v13);
      if ( v22 == v18 )
      {
        v25 = BmlCompareModeResolution(v24, v23);
        if ( v25 == v26 )
        {
LABEL_21:
          v19 = BmlComparePixelFormats(a4, a5, *(_DWORD *)(v10 + a1 + 120));
          if ( !v19 )
          {
            v19 = BmlCompareModeRegions((unsigned int *)(a4 + 76), (unsigned int *)(a5 + 76));
            if ( v19 )
            {
              v21 = BmlCompareSourceModesWithMonitors(a1, v5, v20, a4, a5);
              if ( v21 )
                return v21;
            }
          }
          return v19;
        }
        return 1;
      }
    }
    else
    {
      v18 = BmlCompareModeRegions((unsigned int *)(a5 + 76), v16);
      if ( !v18 )
        goto LABEL_21;
    }
    return v18;
  }
  return result;
}
