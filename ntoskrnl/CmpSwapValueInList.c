/*
 * XREFs of CmpSwapValueInList @ 0x1402FCC08
 * Callers:
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A26E00 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpSwapValueInList(ULONG_PTR a1, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v5; // rdx
  bool v6; // zf
  __int64 v8; // rsi
  __int64 CellPaged; // rax
  unsigned int v10; // edi
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v12 = -1;
  v5 = *(unsigned int *)(a4 + 4);
  v6 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  v8 = a3;
  v13 = 0;
  if ( v6 )
    CellPaged = HvpGetCellPaged(a1);
  else
    CellPaged = HvpGetCellFlat(a1, v5);
  v10 = 0;
  if ( CellPaged )
  {
    *(_DWORD *)(CellPaged + 4 * v8) = a2;
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a1, &v12);
    else
      HvpReleaseCellPaged(a1, &v12);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
