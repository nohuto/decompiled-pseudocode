__int64 __fastcall CmpInsertSecurityCellList(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        int a3,
        char a4)
{
  unsigned int v5; // r14d
  bool v6; // zf
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 CellPaged; // rax
  __int64 v12; // r9
  __int64 v13; // rdi
  int v14; // r14d
  __int64 v15; // rcx
  __int64 CellFlat; // rax
  __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-30h] BYREF
  __int64 v24; // [rsp+28h] [rbp-28h] BYREF
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v27[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h]
  char v29; // [rsp+A0h] [rbp+50h]

  v5 = BugCheckParameter4;
  v23 = 0xFFFFFFFFLL;
  v24 = 0xFFFFFFFFLL;
  v6 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v28 = 0LL;
  v8 = 0LL;
  v27[0] = 0xFFFFFFFFLL;
  v9 = 0LL;
  v26 = 0xFFFFFFFFLL;
  v10 = 0LL;
  v25 = 0xFFFFFFFFLL;
  v29 = 0;
  if ( v6 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)a3);
  v13 = CellPaged;
  if ( a3 < 0 )
    goto LABEL_4;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v9 = CellFlat;
  v18 = *(_WORD *)(CellFlat + 2) & 4;
  if ( a4 )
  {
    v10 = v9;
  }
  else
  {
    if ( v18 )
    {
LABEL_4:
      *(_DWORD *)(v13 + 8) = a3;
      *(_DWORD *)(v13 + 4) = a3;
      goto LABEL_5;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v19 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v9 + 16));
    else
      v19 = HvpGetCellPaged(BugCheckParameter3);
    v10 = v19;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v20 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v10 + 44));
  else
    v20 = HvpGetCellPaged(BugCheckParameter3);
  v8 = v20;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v21 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v20 + 4));
  else
    v21 = HvpGetCellPaged(BugCheckParameter3);
  v28 = v21;
  v14 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v10 + 44));
  if ( v14 < 0 )
    goto LABEL_7;
  v22 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v8 + 4));
  v15 = v28;
  v14 = v22;
  if ( v22 < 0 )
    goto LABEL_8;
  *(_DWORD *)(v13 + 4) = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v13 + 8) = *(_DWORD *)(v28 + 8);
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v28 + 8) = a3;
  v29 = 1;
LABEL_5:
  v14 = CmpAddSecurityCellToCache(BugCheckParameter3, (unsigned int)a3, 0, v12);
  if ( v14 >= 0 )
  {
    v14 = 0;
LABEL_7:
    v15 = v28;
    goto LABEL_8;
  }
  v15 = v28;
  if ( v29 )
  {
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v13 + 4);
    *(_DWORD *)(v28 + 8) = *(_DWORD *)(v13 + 8);
  }
LABEL_8:
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v23);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v23);
  }
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v24);
  }
  if ( v10 && v10 != v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v25);
  }
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v26);
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v27);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v27);
  }
  return (unsigned int)v14;
}
