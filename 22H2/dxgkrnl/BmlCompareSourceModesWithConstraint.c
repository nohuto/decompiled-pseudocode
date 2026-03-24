/*
 * XREFs of BmlCompareSourceModesWithConstraint @ 0x1C0147190
 * Callers:
 *     BmlCompareSourceModes @ 0x1C014766C (BmlCompareSourceModes.c)
 * Callees:
 *     BmlDoesSourceModeObeyConstraint @ 0x1C01474DC (BmlDoesSourceModeObeyConstraint.c)
 *     BmlCompareRegionsWithPivot @ 0x1C01477DC (BmlCompareRegionsWithPivot.c)
 */

__int64 __fastcall BmlCompareSourceModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // r9d
  __int64 v17; // rax
  __int64 v18; // rax

  v8 = *(_QWORD *)(104LL * a2 + a1 + 16);
  v11 = 0;
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( (*(_QWORD *)v8 & 0x8000000100LL) != 0
    && (v14 = *(_DWORD *)(v8 + 116), v15 = *(_DWORD *)(a3 + 96), (v15 == v14) != (*(_DWORD *)(a4 + 96) == v14)) )
  {
    v11 = -1;
    if ( v15 == v14 )
      return 1;
  }
  else if ( (*(_QWORD *)v8 & 0x100LL) != 0 )
  {
    return (unsigned int)BmlCompareRegionsWithPivot(
                           (struct _D3DKMDT_2DREGION *)(a3 + 76),
                           (struct _D3DKMDT_2DREGION *)(a4 + 76),
                           (struct _D3DKMDT_2DREGION *)(v8 + 96));
  }
  return v11;
}
