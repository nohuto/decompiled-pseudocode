__int64 __fastcall CmpDuplicateIndex(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4,
        int a3,
        unsigned int *a4)
{
  unsigned int v5; // edi
  unsigned int v7; // esi
  _DWORD *v8; // r14
  _WORD *CellFlat; // rax
  _WORD *v10; // r15
  int v11; // r12d
  unsigned int v12; // esi
  _DWORD *CellPaged; // rax
  int v14; // r13d
  _WORD *v15; // rax
  _WORD *v16; // rsi
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4a; // [rsp+90h] [rbp+40h] BYREF
  int v22; // [rsp+A0h] [rbp+50h]
  unsigned int *v23; // [rsp+A8h] [rbp+58h]

  v23 = a4;
  v22 = a3;
  v5 = 0;
  v20[0] = 0xFFFFFFFFLL;
  v19 = 0xFFFFFFFFLL;
  LODWORD(BugCheckParameter4a) = -1;
  v7 = BugCheckParameter4;
  v8 = 0LL;
  LODWORD(v18) = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter2, BugCheckParameter4, v20);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter2, BugCheckParameter4, (unsigned int *)v20);
  v10 = CellFlat;
  if ( *CellFlat != 26994 )
  {
    v11 = HvDuplicateCell(BugCheckParameter2, v7, a3, 1, (int *)&BugCheckParameter4a);
    if ( v11 >= 0 )
    {
      v12 = BugCheckParameter4a;
      goto LABEL_15;
    }
LABEL_20:
    v12 = BugCheckParameter4a;
    goto LABEL_21;
  }
  v11 = HvDuplicateCell(BugCheckParameter2, v7, a3, 0, (int *)&BugCheckParameter4a);
  if ( v11 < 0 )
    goto LABEL_20;
  v12 = BugCheckParameter4a;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellPaged = (_DWORD *)HvpGetCellFlat(BugCheckParameter2, (unsigned int)BugCheckParameter4a, &v19);
  else
    CellPaged = (_DWORD *)HvpGetCellPaged(BugCheckParameter2, BugCheckParameter4a, (unsigned int *)&v19);
  *CellPaged = 26994;
  v8 = CellPaged;
  v14 = 0;
  if ( v10[1] )
  {
    do
    {
      v11 = HvDuplicateCell(BugCheckParameter2, *(unsigned int *)&v10[2 * v14 + 2], v22, 1, (int *)&v18);
      if ( v11 < 0 )
        goto LABEL_16;
      v8[v14 + 1] = v18;
      ++*((_WORD *)v8 + 1);
    }
    while ( ++v14 < (unsigned int)(unsigned __int16)v10[1] );
  }
LABEL_15:
  *v23 = v12;
  v12 = -1;
LABEL_16:
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v19);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v19);
  }
LABEL_21:
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, v20);
  else
    HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)v20);
  if ( v12 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      v15 = (_WORD *)HvpGetCellFlat(BugCheckParameter2, v12, &v19);
    else
      v15 = (_WORD *)HvpGetCellPaged(BugCheckParameter2, v12, (unsigned int *)&v19);
    v16 = v15;
    if ( *v15 == 26994 && v15[1] )
    {
      do
        HvFreeCell(BugCheckParameter2, *(unsigned int *)&v16[2 * v5++ + 2]);
      while ( v5 < (unsigned __int16)v16[1] );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v19);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v19);
  }
  return (unsigned int)v11;
}
