/*
 * XREFs of CmpAddValueToListEx @ 0x1407A5A94
 * Callers:
 *     CmpCopyKeyPartial @ 0x14078ECB4 (CmpCopyKeyPartial.c)
 *     CmpSetValueKeyNew @ 0x1407A5CB0 (CmpSetValueKeyNew.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpSetValueKeyTombstone @ 0x140A14050 (CmpSetValueKeyTombstone.c)
 *     CmpMergeKeyValues @ 0x140A1F628 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140A20124 (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A26E00 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvReallocateCell @ 0x1407A5D90 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1407A63A8 (HvAllocateCell.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpAddValueToListEx(
        ULONG_PTR BugCheckParameter3,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5,
        int a6)
{
  unsigned int *v6; // r15
  __int64 v9; // r12
  __int64 v11; // rbx
  unsigned int v12; // esi
  int Cell; // eax
  __int64 v14; // rdx
  unsigned int v15; // r14d
  int v17; // edx
  _DWORD *v18; // r8
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF

  v6 = a5;
  LODWORD(a5) = 0;
  v19 = 0LL;
  v20 = 0LL;
  v9 = a3;
  HvpGetCellContextReinitialize(&v19);
  v11 = *v6;
  v12 = v11 + 1;
  if ( (unsigned int)(v11 + 1) <= 1 )
  {
    v17 = 1;
    if ( a6 )
      v17 = a6;
    Cell = HvAllocateCell(BugCheckParameter3, 4 * v17, a4, (unsigned int)&a5, (__int64)&v20, (__int64)&v19);
  }
  else
  {
    Cell = HvReallocateCell(BugCheckParameter3, v6[1], (__int64)&a5, (__int64)&v20, (__int64)&v19);
  }
  v14 = v20;
  v15 = Cell;
  if ( Cell >= 0 )
  {
    v6[1] = (unsigned int)a5;
    if ( (unsigned int)v11 > (unsigned int)v9 )
    {
      v18 = (_DWORD *)(v14 + 4 * v11);
      do
      {
        v11 = (unsigned int)(v11 - 1);
        *v18-- = *(_DWORD *)(v14 + 4 * v11);
      }
      while ( (unsigned int)v11 > (unsigned int)v9 );
    }
    *(_DWORD *)(v14 + 4 * v9) = a2;
    v15 = 0;
    *v6 = v12;
  }
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v19);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v19);
  }
  return v15;
}
