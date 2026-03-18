/*
 * XREFs of CmpFindNameInListWithStatus @ 0x1406D2824
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpFindNameInList @ 0x1406D0F6C (CmpFindNameInList.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1406D28EC (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A13F50 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpMergeKeyValues @ 0x140A22388 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpFindNameInListCellWithStatus @ 0x1406DF8E0 (CmpFindNameInListCellWithStatus.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E034C (HvpGetCellContextReinitialize.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
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
