/*
 * XREFs of CmpFreeKeyBody @ 0x14070BC74
 * Callers:
 *     CmpFreeKeyByCell @ 0x14070B2C4 (CmpFreeKeyByCell.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14070AC90 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 */

char __fastcall CmpFreeKeyBody(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // esi
  bool v3; // zf
  __int64 CellPaged; // rax
  __int64 v6; // rdi
  ULONG_PTR v7; // rdx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v2 = BugCheckParameter3;
  v3 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v10 = 0;
  if ( v3 )
    CellPaged = HvpGetCellPaged(BugCheckParameter2, BugCheckParameter3, &v9);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3);
  v6 = CellPaged;
  if ( CellPaged )
  {
    if ( (*(_BYTE *)(CellPaged + 2) & 2) == 0 )
    {
      v7 = *(unsigned int *)(CellPaged + 44);
      if ( (_DWORD)v7 != -1 )
        HvFreeCell(BugCheckParameter2, v7);
      if ( *(_WORD *)(v6 + 74) )
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(v6 + 48));
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v9);
    HvFreeCell(BugCheckParameter2, v2);
    LOBYTE(CellPaged) = 1;
  }
  return CellPaged;
}
