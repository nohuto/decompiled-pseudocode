__int64 __fastcall CmpUpdateParentForEachSon(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  int v3; // r12d
  __int64 CellFlat; // rax
  _DWORD *v5; // r14
  unsigned int v6; // esi
  unsigned int v7; // r15d
  int SubKeyByNumber; // edi
  __int64 CellPaged; // rax
  __int64 v11; // [rsp+60h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp+50h] BYREF
  __int64 v13; // [rsp+78h] [rbp+58h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v13 = 0xFFFFFFFFLL;
  v3 = a2;
  v11 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v13);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v13);
  v5 = (_DWORD *)CellFlat;
  v6 = 0;
  v7 = *(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24);
  if ( v7 )
  {
    while ( 1 )
    {
      SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3, v5, v6, &BugCheckParameter4);
      if ( SubKeyByNumber < 0 )
        break;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v11);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v11);
      *(_DWORD *)(CellPaged + 16) = v3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v11);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v11);
      if ( ++v6 >= v7 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    SubKeyByNumber = 0;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v13);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
  return (unsigned int)SubKeyByNumber;
}
