/*
 * XREFs of HvDuplicateCell @ 0x1407890A4
 * Callers:
 *     CmpCloneKCBValueListForTrans @ 0x140788FC0 (CmpCloneKCBValueListForTrans.c)
 *     CmpDuplicateIndex @ 0x140A20550 (CmpDuplicateIndex.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvAllocateCell @ 0x1407A63A8 (HvAllocateCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall HvDuplicateCell(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        int a3,
        char a4,
        int *a5)
{
  unsigned int v8; // edi
  __int64 CellFlat; // rax
  const void *v10; // r14
  int v11; // r15d
  int Cell; // eax
  void *v13; // rdi
  unsigned int v14; // esi
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  void *v18; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+80h] [rbp+30h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v19 = -1;
  v8 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v16);
  v18 = 0LL;
  HvpGetCellContextReinitialize(&v17);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v10 = (const void *)CellFlat;
  v11 = -4 - *(_DWORD *)(CellFlat - 4);
  Cell = HvAllocateCell(BugCheckParameter3, v11, a3, (unsigned int)&v19, (__int64)&v18, (__int64)&v17);
  v13 = v18;
  v14 = Cell;
  if ( Cell >= 0 )
  {
    if ( a4 == 1 )
      memmove(v18, v10, v11);
    else
      memset(v18, 0, v11);
    v14 = 0;
    *a5 = v19;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v16);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v16);
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v17);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v17);
  }
  return v14;
}
