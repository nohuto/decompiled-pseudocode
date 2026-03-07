__int64 __fastcall CmpRemoveSecurityCellList(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 v3; // r14
  unsigned int v4; // r15d
  bool v5; // zf
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 CellFlat; // rax
  __int64 v9; // rsi
  __int64 CellPaged; // rax
  int v11; // [rsp+50h] [rbp+30h] BYREF
  int v12; // [rsp+54h] [rbp+34h]
  int v13; // [rsp+60h] [rbp+40h] BYREF
  int v14; // [rsp+64h] [rbp+44h]
  int v15; // [rsp+68h] [rbp+48h] BYREF
  int v16; // [rsp+6Ch] [rbp+4Ch]

  v14 = 0;
  v16 = 0;
  v3 = 0LL;
  v13 = -1;
  v15 = -1;
  v4 = a2;
  v5 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v11 = -1;
  v12 = 0;
  if ( v5 )
    result = HvpGetCellPaged(BugCheckParameter3);
  else
    result = HvpGetCellFlat(BugCheckParameter3, a2);
  v7 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(result + 4));
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v9 = CellFlat;
    if ( CellFlat
      && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? (CellPaged = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v7 + 8)))
        : (CellPaged = HvpGetCellPaged(BugCheckParameter3)),
          (v3 = CellPaged) != 0) )
    {
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v7 + 8);
      *(_DWORD *)(CellPaged + 4) = *(_DWORD *)(v7 + 4);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v13);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v13);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v15);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v15);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v11);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v11);
      return CmpRemoveFromSecurityCache(BugCheckParameter3, v4);
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        result = HvpReleaseCellFlat(BugCheckParameter3, &v11);
      else
        result = HvpReleaseCellPaged(BugCheckParameter3, &v11);
      if ( v9 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          result = HvpReleaseCellFlat(BugCheckParameter3, &v13);
        else
          result = HvpReleaseCellPaged(BugCheckParameter3, &v13);
      }
      if ( v3 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          return HvpReleaseCellFlat(BugCheckParameter3, &v15);
        else
          return HvpReleaseCellPaged(BugCheckParameter3, &v15);
      }
    }
  }
  return result;
}
