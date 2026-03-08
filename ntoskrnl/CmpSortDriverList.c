/*
 * XREFs of CmpSortDriverList @ 0x140B330B4
 * Callers:
 *     CmGetSystemDriverList @ 0x140B59568 (CmGetSystemDriverList.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindValueByName @ 0x1407A74A0 (CmpFindValueByName.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByName @ 0x1407FE71C (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x1407FEFF8 (CmpValueToData.c)
 *     CmpDoSort @ 0x140B34CB0 (CmpDoSort.c)
 */

char __fastcall CmpSortDriverList(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 a3)
{
  bool v3; // zf
  __int64 CellPaged; // rax
  unsigned int SubKeyByName; // edi
  unsigned int v9; // edi
  __int64 v10; // rax
  unsigned int ValueByName; // edi
  ULONG_PTR v12; // rax
  PVOID v13; // rax
  PVOID v14; // rdi
  char v15; // di
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+20h] BYREF
  __int64 v21; // [rsp+88h] [rbp+38h] BYREF

  v20 = 0;
  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v18 = 0xFFFFFFFFLL;
  v19 = 0LL;
  v17 = 0xFFFFFFFFLL;
  v21 = 0xFFFFFFFFLL;
  if ( v3 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v21);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v21);
  if ( !CellPaged )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v21);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v21);
  if ( SubKeyByName == -1 )
    return 0;
  if ( !((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, &v21)
       : HvpGetCellPaged(BugCheckParameter3, SubKeyByName, (unsigned int *)&v21)) )
    return 0;
  v9 = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v21);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v21);
  if ( v9 == -1 )
    return 0;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, v9, &v21)
      : HvpGetCellPaged(BugCheckParameter3, v9, (unsigned int *)&v21);
  if ( !v10 )
    return 0;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v10, (int)L"\b\n");
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v21);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v21);
  if ( ValueByName == -1 )
    return 0;
  v12 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, ValueByName, &v17)
      : HvpGetCellPaged(BugCheckParameter3, ValueByName, (unsigned int *)&v17);
  if ( !v12 )
    return 0;
  if ( *(_DWORD *)(v12 + 12) != 7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v17);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v17);
    return 0;
  }
  v13 = CmpValueToData(BugCheckParameter3, ValueByName, v12, &v20);
  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v14 = v13;
  *((_QWORD *)&v19 + 1) = v13;
  if ( v3 )
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v17);
  else
    HvpReleaseCellFlat(BugCheckParameter3, &v17);
  if ( !v14 )
    return 0;
  WORD1(v19) = v20 - 2;
  LOWORD(v19) = v20 - 2;
  v15 = CmpDoSort(a3, &v19);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v18);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v18);
  return v15;
}
