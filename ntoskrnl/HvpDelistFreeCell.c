/*
 * XREFs of HvpDelistFreeCell @ 0x1407A5BF0
 * Callers:
 *     HvpDoAllocateCell @ 0x1407A6420 (HvpDoAllocateCell.c)
 *     HvpIsFreeNeighbor @ 0x1407A6CB0 (HvpIsFreeNeighbor.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpRemoveFreeCellHint @ 0x1407A6200 (HvpRemoveFreeCellHint.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall HvpDelistFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 CellFlat; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0xFFFFFFFFLL;
  v2 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2);
  v5 = CellFlat;
  result = CellFlat - 4;
  if ( (result & -(__int64)(v5 != 0)) != 0 )
  {
    HvpRemoveFreeCellHint(BugCheckParameter2, v2, 0);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter2, &v7);
    else
      return HvpReleaseCellPaged(BugCheckParameter2, &v7);
  }
  return result;
}
