/*
 * XREFs of HvReallocateCell @ 0x1407A5D90
 * Callers:
 *     CmpSetValueKeyExisting @ 0x1406BAE08 (CmpSetValueKeyExisting.c)
 *     CmpRemoveValueFromList @ 0x1406BB75C (CmpRemoveValueFromList.c)
 *     CmpSetValueDataExisting @ 0x140796AA4 (CmpSetValueDataExisting.c)
 *     CmpAddToLeaf @ 0x1407A4520 (CmpAddToLeaf.c)
 *     CmpAddValueToListEx @ 0x1407A5A94 (CmpAddValueToListEx.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmpSplitLeaf @ 0x140A21D7C (CmpSplitLeaf.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpDoAllocateCell @ 0x1407A6420 (HvpDoAllocateCell.c)
 *     HvpGetCellContextMove @ 0x1407A69E8 (HvpGetCellContextMove.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall HvReallocateCell(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        int a3,
        char a4,
        int *a5,
        __int64 *a6,
        __int64 a7)
{
  unsigned int v10; // r14d
  void *v11; // r12
  __int64 CellFlat; // rax
  const void *v13; // rsi
  unsigned int v14; // r15d
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // edi
  int v18; // eax
  int Cell; // edi
  void *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-10h] BYREF
  void *v25; // [rsp+38h] [rbp-8h] BYREF
  __int64 v26; // [rsp+80h] [rbp+40h] BYREF
  int v27; // [rsp+90h] [rbp+50h]

  v26 = 0LL;
  v24 = 0LL;
  v27 = -1;
  v10 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v26);
  v11 = 0LL;
  v25 = 0LL;
  HvpGetCellContextReinitialize(&v24);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v10);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v13 = (const void *)CellFlat;
  v14 = -4 - *(_DWORD *)(CellFlat - 4);
  v15 = a3 + 4;
  if ( v15 <= -*(_DWORD *)(CellFlat - 4) )
  {
    v22 = a7;
    *a5 = v10;
    *a6 = CellFlat;
    HvpGetCellContextMove(v22, &v26);
    return 0;
  }
  v16 = 0x4000;
  v17 = (v15 + 7) & 0xFFFFFFF8;
  v18 = 0;
  while ( v17 > v16 )
  {
    v16 *= 2;
    ++v18;
  }
  if ( !v18 )
    v16 = v17;
  if ( v16 > 0x100000 )
  {
    Cell = -1073741670;
    goto LABEL_16;
  }
  Cell = HvpDoAllocateCell(BugCheckParameter3, (__int64)&v25, (__int64)&v24);
  if ( Cell < 0 )
  {
    v11 = v25;
LABEL_16:
    if ( v13 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v26);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v26);
    }
    goto LABEL_17;
  }
  v20 = v25;
  memmove(v25, v13, v14);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v26);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v26);
  if ( a4 )
    HvFreeCell(BugCheckParameter3, v10);
  *a5 = v27;
  v21 = a7;
  *a6 = (__int64)v20;
  HvpGetCellContextMove(v21, &v24);
  Cell = 0;
LABEL_17:
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v24);
  }
  return (unsigned int)Cell;
}
