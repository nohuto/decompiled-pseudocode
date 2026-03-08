/*
 * XREFs of CmpRemoveSubKey @ 0x1406BB374
 * Callers:
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 * Callees:
 *     CmpRemoveSubKeyFromList @ 0x1406BB424 (CmpRemoveSubKeyFromList.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

char __fastcall CmpRemoveSubKey(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  unsigned __int64 v4; // rdi
  bool v5; // zf
  __int64 CellPaged; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  char v9; // di
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v11 = -1;
  v4 = a3;
  v5 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v12 = 0;
  if ( v5 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2);
  v7 = CellPaged;
  if ( !CellPaged )
    return 0;
  v8 = v4 >> 31;
  v9 = CmpRemoveSubKeyFromList(BugCheckParameter3);
  if ( v9 )
  {
    --*(_DWORD *)(v7 + 4 * v8 + 20);
    v9 = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v11);
  return v9;
}
