/*
 * XREFs of CmpFindGroupOrderList @ 0x140B5C400
 * Callers:
 *     CmpFindDrivers @ 0x140B5D88C (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByName @ 0x1408264AC (CmpFindSubKeyByName.c)
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
