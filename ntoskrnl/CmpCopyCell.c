/*
 * XREFs of CmpCopyCell @ 0x14078F10C
 * Callers:
 *     CmpCopyKeyPartial @ 0x14078ECB4 (CmpCopyKeyPartial.c)
 *     CmpCopyValue @ 0x1408A6FF4 (CmpCopyValue.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A1E428 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSyncKeyValues @ 0x140A20124 (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightCreateSetValueData @ 0x140A25E14 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A266F0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvAllocateCell @ 0x1407A63A8 (HvAllocateCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpCopyCell(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int64 a3, int a4, int *a5)
{
  unsigned int v8; // esi
  __int64 CellFlat; // rax
  const void *v10; // rsi
  unsigned int v11; // r12d
  int Cell; // r14d
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  void *v16; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+20h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v17 = -1;
  v8 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v14);
  v16 = 0LL;
  HvpGetCellContextReinitialize(&v15);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v10 = (const void *)CellFlat;
  v11 = -4 - *(_DWORD *)(CellFlat - 4);
  Cell = HvAllocateCell(a3, v11, a4, (unsigned int)&v17, (__int64)&v16, (__int64)&v15);
  if ( Cell >= 0 )
  {
    memmove(v16, v10, v11);
    Cell = 0;
    *a5 = v17;
  }
  if ( v16 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, &v15);
    else
      HvpReleaseCellPaged(a3, &v15);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v14);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v14);
  return (unsigned int)Cell;
}
