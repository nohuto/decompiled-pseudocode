/*
 * XREFs of CmpAddSubKeyEx @ 0x1407A4094
 * Callers:
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpAddSubKey @ 0x1408A734E (CmpAddSubKey.c)
 *     CmpCopySyncTree2 @ 0x140A1E7F8 (CmpCopySyncTree2.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140A23568 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpAddSubKeyToList @ 0x1407A4300 (CmpAddSubKeyToList.c)
 *     HvAllocateCell @ 0x1407A63A8 (HvAllocateCell.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpAddSubKeyEx(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v5; // r12d
  unsigned int v8; // edi
  __int64 CellFlat; // rax
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r15
  unsigned int *v13; // rsi
  __int16 *CellPaged; // rax
  __int16 v15; // cx
  __int16 *v16; // rdi
  int Cell; // esi
  int v19; // eax
  unsigned int v20; // ecx
  __int16 v21; // r13
  int v22; // edx
  __int16 *v23; // rax
  int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int16 *v27; // rcx
  int *v28; // rsi
  int v29; // [rsp+30h] [rbp-30h] BYREF
  int v30; // [rsp+34h] [rbp-2Ch]
  unsigned int v31; // [rsp+38h] [rbp-28h]
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  __int16 *v33; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-10h] BYREF
  int v35; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+50h]

  v36 = a3;
  v30 = -1;
  v34[0] = 0LL;
  v32 = 0LL;
  v5 = -1;
  v35 = -1;
  v29 = -1;
  v8 = BugCheckParameter4;
  HvpGetCellContextReinitialize(v34);
  v33 = 0LL;
  HvpGetCellContextReinitialize(&v32);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v10 = CellFlat;
  v11 = a3 >> 31;
  v31 = a3 >> 31;
  v12 = v11;
  if ( !*(_DWORD *)(CellFlat + 4 * v11 + 20) )
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 220) < 5u )
    {
      v22 = 12;
      v21 = 26220;
    }
    else
    {
      v19 = 1012;
      v20 = 1;
      v21 = 26732;
      if ( a4 )
        v20 = a4;
      if ( v20 < 0x3F4 )
        v19 = v20;
      v22 = 8 * v19 + 4;
    }
    Cell = HvAllocateCell(BugCheckParameter3, v22, v11, (unsigned int)&v35, (__int64)&v33, (__int64)&v32);
    if ( Cell < 0 )
    {
      v16 = v33;
      v5 = v35;
    }
    else
    {
      v23 = v33;
      *v33 = v21;
      v23[1] = 0;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v32);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v32);
      v16 = 0LL;
      Cell = CmpAddSubKeyToList(BugCheckParameter3);
      if ( Cell >= 0 )
      {
        v5 = -1;
        *(_DWORD *)(v10 + 4 * v12 + 28) = v35;
LABEL_11:
        ++*(_DWORD *)(v10 + 4 * v12 + 20);
        Cell = 0;
        goto LABEL_12;
      }
      v5 = v35;
    }
    goto LABEL_12;
  }
  v13 = (unsigned int *)(CellFlat + 4 * (v11 + 7));
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (__int16 *)HvpGetCellFlat(BugCheckParameter3, *v13);
  else
    CellPaged = (__int16 *)HvpGetCellPaged(BugCheckParameter3);
  v15 = *CellPaged;
  v16 = CellPaged;
  if ( *CellPaged == 26220 )
  {
    if ( (unsigned __int16)CellPaged[1] < 0x1FBu )
      goto LABEL_10;
    v24 = HvpMarkCellDirty(BugCheckParameter3, *v13);
    Cell = v24;
    if ( v24 < 0 )
      goto LABEL_12;
    v25 = 0;
    if ( v16[1] )
    {
      do
      {
        v26 = v25++;
        *(_DWORD *)&v16[2 * v26 + 2] = *(_DWORD *)&v16[4 * v26 + 2];
      }
      while ( v25 < (unsigned __int16)v16[1] );
      v5 = v30;
    }
    *v16 = 26988;
  }
  else if ( v15 != 26988 && v15 != 26732 )
  {
    goto LABEL_10;
  }
  if ( (unsigned __int16)v16[1] < 0x3F5u )
    goto LABEL_10;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v32);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v32);
  v33 = 0LL;
  Cell = HvAllocateCell(BugCheckParameter3, 12, v31, (unsigned int)&v29, (__int64)&v33, (__int64)&v32);
  if ( Cell >= 0 )
  {
    v27 = v33;
    v28 = (int *)(v10 + 4 * (v12 + 7));
    *(_DWORD *)v33 = 92530;
    *((_DWORD *)v27 + 1) = *v28;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v32);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v32);
    v16 = 0LL;
    *v28 = v29;
LABEL_10:
    Cell = CmpAddSubKeyToList(BugCheckParameter3);
    if ( Cell < 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v16 = v33;
LABEL_12:
  if ( v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v34);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v34);
  }
  if ( v16 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v32);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v32);
  }
  if ( v5 != -1 )
    HvFreeCell(BugCheckParameter3, v5);
  return (unsigned int)Cell;
}
