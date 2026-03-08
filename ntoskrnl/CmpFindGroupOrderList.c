/*
 * XREFs of CmpFindGroupOrderList @ 0x140B332CC
 * Callers:
 *     CmpFindDrivers @ 0x140B34758 (CmpFindDrivers.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByName @ 0x1407FE71C (CmpFindSubKeyByName.c)
 */

__int64 __fastcall CmpFindGroupOrderList(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 CellFlat; // rax
  unsigned int SubKeyByName; // edi
  unsigned int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v8);
  if ( !CellFlat )
    return 0xFFFFFFFFLL;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v8);
  if ( SubKeyByName == -1 )
    return 0xFFFFFFFFLL;
  if ( !((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, &v8)
       : HvpGetCellPaged(BugCheckParameter3, SubKeyByName, (unsigned int *)&v8)) )
    return 0xFFFFFFFFLL;
  v6 = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v8);
  return v6;
}
