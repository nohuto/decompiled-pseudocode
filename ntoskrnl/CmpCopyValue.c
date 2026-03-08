/*
 * XREFs of CmpCopyValue @ 0x1408A6FF4
 * Callers:
 *     CmpCopyKeyPartial @ 0x14078ECB4 (CmpCopyKeyPartial.c)
 *     CmpMergeKeyValues @ 0x140A1F628 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140A20124 (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpFreeValueData @ 0x1406BAAE0 (CmpFreeValueData.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpCopyCell @ 0x14078F10C (CmpCopyCell.c)
 *     CmpSetValueDataNew @ 0x1407A4E40 (CmpSetValueDataNew.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     CmpGetValueData @ 0x1407AAC20 (CmpGetValueData.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCopyValue(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter2,
        int a4,
        unsigned int *a5)
{
  unsigned int v6; // r12d
  unsigned int v9; // esi
  __int64 CellFlat; // rax
  __int64 v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // r14d
  int v14; // eax
  unsigned int v15; // esi
  int v16; // r15d
  bool ValueData; // al
  bool v18; // sf
  __int64 v19; // rax
  bool v20; // zf
  int *CellPaged; // rax
  unsigned int v22; // r15d
  int v23; // r15d
  __int64 v24; // rax
  ULONG_PTR BugCheckParameter3a; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-28h] BYREF
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4a; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v32; // [rsp+B8h] [rbp+48h]
  int v33; // [rsp+C8h] [rbp+58h]

  v33 = a4;
  v32 = BugCheckParameter4;
  v29 = 0LL;
  BugCheckParameter3a = -1LL;
  v6 = -1;
  v9 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v29);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v9, &v29);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v9, (unsigned int *)&v29);
  v11 = CellFlat;
  v12 = *(_DWORD *)(CellFlat + 4);
  LODWORD(v28) = v12;
  v13 = v12 + 0x80000000;
  if ( v12 < 0x80000000 )
    v13 = v12;
  P[0] = (PVOID)(v11 + 8);
  LODWORD(BugCheckParameter4a) = *(_DWORD *)(v11 + 8);
  v27 = v13;
  v14 = CmpCopyCell(BugCheckParameter3, v9, BugCheckParameter2, a4, (int *)&BugCheckParameter3a + 1);
  v15 = HIDWORD(BugCheckParameter3a);
  v16 = v14;
  if ( v14 >= 0 )
  {
    if ( v13 )
    {
      if ( v13 <= 4 )
      {
        CellPaged = (int *)P[0];
        if ( (unsigned int)v28 < 0x80000000 )
        {
          v22 = *(_DWORD *)P[0];
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v29);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            CellPaged = (int *)HvpGetCellFlat(BugCheckParameter3, v22, &v29);
          else
            CellPaged = (int *)HvpGetCellPaged(BugCheckParameter3, v22, (unsigned int *)&v29);
        }
        v23 = *CellPaged;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v29);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          v24 = HvpGetCellFlat(BugCheckParameter2, v15, &v29);
        else
          v24 = HvpGetCellPaged(BugCheckParameter2, v15, (unsigned int *)&v29);
        *(_DWORD *)(v24 + 8) = v23;
        *(_DWORD *)(v24 + 4) = v13 + 0x80000000;
        v20 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
      }
      else
      {
        if ( (*(_DWORD *)(BugCheckParameter3 + 220) < 4u || v13 - 16345 > 0x7FFFC026)
          && (*(_DWORD *)(BugCheckParameter2 + 220) < 4u || v13 - 16345 > 0x7FFFC026) )
        {
          v16 = CmpCopyCell(
                  BugCheckParameter3,
                  (unsigned int)BugCheckParameter4a,
                  BugCheckParameter2,
                  v33,
                  (int *)&BugCheckParameter3a);
          v18 = v16 < 0;
        }
        else
        {
          P[0] = 0LL;
          v28 = 0xFFFFFFFFLL;
          LOBYTE(BugCheckParameter4a) = 0;
          ValueData = CmpGetValueData(BugCheckParameter3, v32, v11, &v27, (__int64)P, (__int64)&BugCheckParameter4a);
          v13 = v27;
          if ( !ValueData )
          {
            v15 = HIDWORD(BugCheckParameter3a);
            v16 = -1073741670;
            goto LABEL_50;
          }
          v16 = CmpSetValueDataNew(BugCheckParameter2, (char *)P[0], v27, v33, &BugCheckParameter3a);
          if ( (_BYTE)BugCheckParameter4a )
          {
            ExFreePoolWithTag(P[0], 0);
          }
          else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          {
            HvpReleaseCellFlat(BugCheckParameter3, &v28);
          }
          else
          {
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
          }
          v18 = v16 < 0;
        }
        if ( v18 )
        {
          v6 = BugCheckParameter3a;
          goto LABEL_50;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v29);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          v19 = HvpGetCellFlat(BugCheckParameter2, v15, &v29);
        else
          v19 = HvpGetCellPaged(BugCheckParameter2, v15, (unsigned int *)&v29);
        *(_DWORD *)(v19 + 8) = BugCheckParameter3a;
        *(_DWORD *)(v19 + 4) = v13;
        v20 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
      }
      if ( v20 )
        HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v29);
      else
        HvpReleaseCellFlat(BugCheckParameter2, &v29);
      v11 = 0LL;
    }
    *a5 = v15;
    v15 = -1;
    v6 = -1;
    v16 = 0;
  }
LABEL_50:
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
  }
  if ( v6 != -1 )
    CmpFreeValueData(BugCheckParameter2, v6, v13);
  if ( v15 != -1 )
    HvFreeCell(BugCheckParameter2, v15);
  return (unsigned int)v16;
}
