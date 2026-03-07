__int64 __fastcall CmpRemoveSubKeyCellNoCellRef(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, int a3)
{
  unsigned int v5; // edi
  __int64 CellFlat; // rax
  __int64 v7; // r14
  int v8; // edi
  unsigned int v9; // r12d
  _WORD *CellPaged; // rax
  _WORD *v11; // rsi
  unsigned int v12; // edi
  unsigned int *v13; // r13
  unsigned int v14; // r15d
  ULONG_PTR v15; // rdx
  _WORD *v16; // rax
  unsigned __int16 v17; // di
  bool v18; // zf
  unsigned __int16 v19; // r15
  unsigned __int16 CellInIndex; // [rsp+20h] [rbp-30h]
  __int64 v22; // [rsp+28h] [rbp-28h] BYREF
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v24; // [rsp+38h] [rbp-18h]
  _QWORD v25[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v26; // [rsp+90h] [rbp+40h]
  unsigned __int16 v28; // [rsp+A8h] [rbp+58h]

  v25[0] = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v22 = 0xFFFFFFFFLL;
  v5 = BugCheckParameter4;
  v24 = 0LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, BugCheckParameter4, v25);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, (unsigned int *)v25);
  v7 = CellFlat;
  v8 = HvpMarkCellDirty(BugCheckParameter3, v5, 0);
  if ( v8 < 0 )
    goto LABEL_52;
  v9 = *(_DWORD *)(v7 + 28);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v9, &v23);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v9, (unsigned int *)&v23);
  v11 = CellPaged;
  if ( *CellPaged == 26994 )
  {
    v12 = 0;
    v28 = CellPaged[1];
    if ( v28 )
    {
      v13 = (unsigned int *)(CellPaged + 2);
      while ( 1 )
      {
        if ( v12 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v22);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v22);
        }
        v14 = *v13;
        v15 = *v13;
        v16 = (_WORD *)((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
                      ? HvpGetCellFlat(BugCheckParameter3, v15, &v22)
                      : HvpGetCellPaged(BugCheckParameter3, v15, (unsigned int *)&v22));
        v24 = v16;
        CellInIndex = CmpFindCellInIndex(v16, a3);
        v26 = v24[1];
        if ( CellInIndex < v26 )
          break;
        ++v12;
        ++v13;
        if ( v12 >= v28 )
          goto LABEL_20;
      }
      v8 = HvpMarkCellDirty(BugCheckParameter3, v14, 0);
      if ( v8 < 0 )
        goto LABEL_28;
      if ( v26 == 1 )
      {
        v8 = HvpMarkCellDirty(BugCheckParameter3, v9, 0);
        if ( v8 < 0 )
          goto LABEL_28;
        v17 = CmpFindCellInIndex(v11, v14);
        if ( v17 >= v11[1] )
        {
          v8 = -1073741492;
LABEL_28:
          if ( v24 )
          {
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v22);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v22);
          }
          goto LABEL_48;
        }
      }
      else
      {
        v17 = v28;
      }
      CmpRemoveCellFromIndex(v24, CellInIndex);
      if ( v26 == 1 )
      {
        CmpRemoveCellFromIndex(v11, v17);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v22);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v22);
        v24 = 0LL;
        HvFreeCell(BugCheckParameter3, v14);
        if ( !v11[1] )
        {
          v18 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
LABEL_38:
          if ( v18 )
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
          else
            HvpReleaseCellFlat(BugCheckParameter3, &v23);
          v11 = 0LL;
          HvFreeCell(BugCheckParameter3, v9);
          goto LABEL_20;
        }
      }
    }
    goto LABEL_20;
  }
  v19 = CmpFindCellInIndex(CellPaged, a3);
  if ( v19 < v11[1] )
  {
    v8 = HvpMarkCellDirty(BugCheckParameter3, v9, 0);
    if ( v8 >= 0 )
    {
      CmpRemoveCellFromIndex(v11, v19);
      if ( !v11[1] )
      {
        v18 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
        goto LABEL_38;
      }
LABEL_20:
      v18 = (*(_DWORD *)(v7 + 20))-- == 1;
      if ( v18 )
      {
        *(_DWORD *)(v7 + 28) = -1;
        *(_WORD *)(v7 + 52) = 0;
        *(_DWORD *)(v7 + 56) = 0;
      }
      v8 = 0;
      goto LABEL_28;
    }
  }
  else
  {
    v8 = -1073741492;
  }
LABEL_48:
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v23);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
  }
LABEL_52:
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v25);
  }
  return (unsigned int)v8;
}
