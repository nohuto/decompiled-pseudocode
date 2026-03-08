/*
 * XREFs of CmpFreeKeyValueList @ 0x140A1F10C
 * Callers:
 *     CmpSyncKeyValues @ 0x140A20124 (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpFreeValue @ 0x1406BAA4C (CmpFreeValue.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

int __fastcall CmpFreeKeyValueList(ULONG_PTR BugCheckParameter2, _DWORD *a2)
{
  int result; // eax
  ULONG_PTR v5; // rdx
  __int64 CellFlat; // rax
  __int64 v7; // rsi
  __int64 i; // r14
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  result = HvpGetCellContextReinitialize(&v9);
  if ( *a2 )
  {
    v5 = (unsigned int)a2[1];
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, v5, &v9);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2, v5, (unsigned int *)&v9);
    v7 = 0LL;
    for ( i = CellFlat; (unsigned int)v7 < *a2; v7 = (unsigned int)(v7 + 1) )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(i + 4 * v7));
    result = HvFreeCell(BugCheckParameter2, (unsigned int)a2[1]);
    if ( i )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        return HvpReleaseCellFlat(BugCheckParameter2, &v9);
      else
        return HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v9);
    }
  }
  return result;
}
