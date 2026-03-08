/*
 * XREFs of CmpLoadServicesNode @ 0x140B32FF0
 * Callers:
 *     CmpFindDrivers @ 0x140B34758 (CmpFindDrivers.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByName @ 0x1407FE71C (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadServicesNode(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 *a3, unsigned int *a4)
{
  __int64 CellFlat; // rax
  unsigned int SubKeyByName; // edi
  __int64 CellPaged; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v11);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v11);
  if ( !CellFlat )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v11);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a4);
  else
    CellPaged = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a4);
  *a3 = CellPaged;
  return CellPaged != 0;
}
