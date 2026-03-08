/*
 * XREFs of CmpFindNameInListWithStatus @ 0x1407A8DA0
 * Callers:
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpFindNameInList @ 0x1407A74D8 (CmpFindNameInList.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1407A8E68 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A11200 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpMergeKeyValues @ 0x140A1F628 (CmpMergeKeyValues.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListCellWithStatus @ 0x1407B3CA0 (CmpFindNameInListCellWithStatus.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpFindNameInListWithStatus(
        ULONG_PTR BugCheckParameter3,
        _DWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rdi
  __int64 CellFlat; // rax
  unsigned int NameInListCellWithStatus; // esi
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0LL;
  v9 = 0LL;
  HvpGetCellContextReinitialize(&v13);
  if ( *a2 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)a2[1]);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v9 = CellFlat;
  }
  NameInListCellWithStatus = CmpFindNameInListCellWithStatus(BugCheckParameter3, a4, a5, a6);
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v13);
  }
  return NameInListCellWithStatus;
}
