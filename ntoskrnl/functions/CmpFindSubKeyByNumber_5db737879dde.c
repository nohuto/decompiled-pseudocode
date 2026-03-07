__int64 __fastcall CmpFindSubKeyByNumber(ULONG_PTR BugCheckParameter3, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // eax
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0xFFFFFFFFLL;
  v5 = a2[5];
  *a4 = -1;
  if ( a3 >= v5 )
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 216) <= 1u || a3 - v5 >= a2[6] )
      return 0LL;
    v7 = (unsigned int)a2[8];
  }
  else
  {
    v7 = (unsigned int)a2[7];
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v7);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  if ( !CellFlat )
    return 3221225626LL;
  *a4 = CmpDoFindSubKeyByNumber(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
  {
    HvpReleaseCellPaged(BugCheckParameter3, &v10);
    return 0LL;
  }
  HvpReleaseCellFlat(BugCheckParameter3, &v10);
  return 0LL;
}
