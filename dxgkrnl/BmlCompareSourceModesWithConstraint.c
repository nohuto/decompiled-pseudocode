/*
 * XREFs of BmlCompareSourceModesWithConstraint @ 0x1C03B88CC
 * Callers:
 *     BmlCompareSourceModes @ 0x1C03B86F4 (BmlCompareSourceModes.c)
 * Callees:
 *     BmlCompareRegionsWithPivot @ 0x1C016E1AC (BmlCompareRegionsWithPivot.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C0170C60 (BmlDoesSourceModeObeyConstraint.c)
 *     ??$BmlCompareValues@_N@@YA?AW4BML_COMPARISON_RESULT@@_N0@Z @ 0x1C01DD75C (--$BmlCompareValues@_N@@YA-AW4BML_COMPARISON_RESULT@@_N0@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  int v9; // ecx
  unsigned int v10; // edx

  v8 = *(_QWORD *)(120LL * a2 + a1 + 16);
  if ( !BmlDoesSourceModeObeyConstraint(a1, a2, (_DWORD *)a3) )
    WdLogSingleEntry0(1LL);
  if ( !BmlDoesSourceModeObeyConstraint(a1, a2, (_DWORD *)a4) )
    WdLogSingleEntry0(1LL);
  v9 = *(_DWORD *)(v8 + 116);
  v10 = 0;
  if ( (!v9
     || (*(_QWORD *)v8 & 0x8000000100LL) == 0
     || (v10 = BmlCompareValues<bool>(*(_DWORD *)(a3 + 96) == v9, *(_DWORD *)(a4 + 96) == v9)) == 0)
    && (*(_DWORD *)v8 & 0x100LL) != 0 )
  {
    return (unsigned int)BmlCompareRegionsWithPivot(
                           (struct _D3DKMDT_2DREGION *)(a3 + 76),
                           (struct _D3DKMDT_2DREGION *)(a4 + 76),
                           (struct _D3DKMDT_2DREGION *)(v8 + 96));
  }
  return v10;
}
