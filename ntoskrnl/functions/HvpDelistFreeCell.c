__int64 __fastcall HvpDelistFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 CellFlat; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0xFFFFFFFFLL;
  v2 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2);
  v5 = CellFlat;
  result = CellFlat - 4;
  if ( (result & -(__int64)(v5 != 0)) != 0 )
  {
    HvpRemoveFreeCellHint(BugCheckParameter2, v2, 0);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter2, &v7);
    else
      return HvpReleaseCellPaged(BugCheckParameter2, &v7);
  }
  return result;
}
