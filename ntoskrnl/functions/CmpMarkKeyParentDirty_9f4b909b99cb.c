__int64 __fastcall CmpMarkKeyParentDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  unsigned int v2; // edi
  __int64 CellFlat; // rax
  int v5; // edi
  unsigned int v6; // ebp
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v2 = a2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v8);
  if ( (*(_BYTE *)(CellFlat + 2) & 4) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v6 = *(_DWORD *)(CellFlat + 16);
    v5 = CmpMarkIndexDirty(BugCheckParameter3, v6, v2);
    if ( v5 >= 0 )
    {
      v5 = HvpMarkCellDirty(BugCheckParameter3, v6, 0);
      if ( v5 >= 0 )
        v5 = 0;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v8);
  return (unsigned int)v5;
}
