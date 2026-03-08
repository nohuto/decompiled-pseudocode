/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x1407ACFB0
 * Callers:
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140A16968 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     CmEqualTrans @ 0x1406B6428 (CmEqualTrans.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074BC50 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlock @ 0x14074BF00 (CmpReferenceKeyControlBlock.c)
 *     CmRmIsKCBVisible @ 0x14075E0B0 (CmRmIsKCBVisible.c)
 *     CmpIsKeyDeleted @ 0x14077B358 (CmpIsKeyDeleted.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByNumber @ 0x1407AD320 (CmpFindSubKeyByNumber.c)
 *     CmpDoFindSubKeyByNumber @ 0x1407AD3EC (CmpDoFindSubKeyByNumber.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1407AF9B0 (CmpDelayDerefKeyControlBlock.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmListGetNextElement @ 0x140AF2008 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        int a3,
        unsigned int *a4,
        ULONG_PTR a5,
        ULONG_PTR a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  ULONG_PTR v9; // r15
  unsigned int SubKeyByNumber; // r14d
  _DWORD *CellFlat; // rax
  _DWORD *v14; // rdi
  __int64 result; // rax
  int v16; // ecx
  int v17; // eax
  bool v18; // zf
  int v19; // eax
  unsigned int v20; // ecx
  char v21; // al
  __int64 v22; // rax
  unsigned int v23; // eax
  _DWORD *v24; // rdx
  int SubkeyInHashByChildCell; // eax
  __int64 NextElement; // rax
  int v27; // eax
  __int64 CellPaged; // rax
  unsigned int i; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-38h] BYREF
  unsigned int BugCheckParameter4; // [rsp+48h] [rbp-30h]
  unsigned int BugCheckParameter4_4; // [rsp+4Ch] [rbp-2Ch]
  __int64 j; // [rsp+50h] [rbp-28h]
  _DWORD v35[2]; // [rsp+58h] [rbp-20h] BYREF
  _DWORD v36[2]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v37; // [rsp+68h] [rbp-10h] BYREF
  int v38; // [rsp+B0h] [rbp+38h]

  v30 = 0xFFFFFFFFLL;
  v9 = 0LL;
  SubKeyByNumber = 0;
  BugCheckParameter2 = 0LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, a2);
  else
    CellFlat = (_DWORD *)HvpGetCellPaged(BugCheckParameter3);
  v14 = CellFlat;
  if ( !CellFlat )
    return 3221225626LL;
  *a4 = -1;
  if ( a9 )
    *a9 = 0LL;
  if ( !a5 || *(_QWORD *)(a5 + 208) == a5 + 208 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3);
  }
  else
  {
    v16 = CellFlat[5];
    v38 = 0;
    v35[0] = -1;
    v35[1] = 0;
    v36[0] = -1;
    v36[1] = 0;
    LODWORD(v37) = v16;
    if ( v16 )
      BugCheckParameter4 = CellFlat[7];
    else
      BugCheckParameter4 = -1;
    v17 = CellFlat[6];
    if ( v17 )
      BugCheckParameter4_4 = v14[8];
    else
      BugCheckParameter4_4 = -1;
    v18 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    LODWORD(j) = v16 + v17;
    if ( v18 )
      HvpReleaseCellPaged(BugCheckParameter3, &v30);
    else
      HvpReleaseCellFlat(BugCheckParameter3, &v30);
    v19 = j;
    v20 = 0;
    v14 = 0LL;
    for ( i = 0; v20 < (unsigned int)j; i = v20 )
    {
      v21 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
      BugCheckParameter2 = 0LL;
      if ( v20 >= (unsigned int)v37 )
      {
        if ( v21 )
          CellPaged = HvpGetCellFlat(BugCheckParameter3, BugCheckParameter4_4);
        else
          CellPaged = HvpGetCellPaged(BugCheckParameter3);
        if ( !CellPaged )
          return 3221225626LL;
        v23 = CmpDoFindSubKeyByNumber(BugCheckParameter3);
        v24 = v36;
      }
      else
      {
        if ( v21 )
          v22 = HvpGetCellFlat(BugCheckParameter3, BugCheckParameter4);
        else
          v22 = HvpGetCellPaged(BugCheckParameter3);
        if ( !v22 )
          return 3221225626LL;
        v23 = CmpDoFindSubKeyByNumber(BugCheckParameter3);
        v24 = v35;
      }
      v18 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      *a4 = v23;
      if ( v18 )
        HvpReleaseCellPaged(BugCheckParameter3, v24);
      else
        HvpReleaseCellFlat(BugCheckParameter3, v24);
      if ( *a4 == -1 )
        return 3221225626LL;
      result = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3, *a4, &BugCheckParameter2);
      SubKeyByNumber = result;
      if ( (int)result < 0 )
        return result;
      v9 = BugCheckParameter2;
      if ( !BugCheckParameter2 || CmRmIsKCBVisible(BugCheckParameter2, a7) && !CmpIsKeyDeleted(v9) )
        ++v38;
      if ( v38 == a3 + 1 )
      {
        v20 = i;
        v19 = j;
        break;
      }
      if ( v9 )
        CmpDelayDerefKeyControlBlock(v9);
      v19 = j;
      v20 = i + 1;
    }
    if ( v20 == v19 )
    {
      v37 = 0LL;
      *a4 = -1;
      NextElement = CmListGetNextElement(a5 + 208, &v37, 32LL);
      for ( j = NextElement; NextElement; j = NextElement )
      {
        if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a7) )
        {
          v27 = *(_DWORD *)(j + 68);
          if ( v27 == 1 )
          {
            v9 = *(_QWORD *)(j + 88);
          }
          else
          {
            if ( v27 != 10 )
              goto LABEL_56;
            v9 = *(_QWORD *)(j + 96);
          }
          BugCheckParameter2 = v9;
          if ( CmRmIsKCBVisible(v9, a7) && !CmpIsKeyDeleted(v9) )
          {
            if ( v38 == a3 )
            {
              *a4 = *(_DWORD *)(v9 + 40);
              CmpReferenceKeyControlBlock(v9);
              break;
            }
            ++v38;
          }
        }
LABEL_56:
        v9 = 0LL;
        BugCheckParameter2 = 0LL;
        NextElement = CmListGetNextElement(a5 + 208, &v37, 32LL);
      }
    }
  }
  if ( !a9 || *a4 == -1 )
  {
    if ( v9 )
      CmpDelayDerefKeyControlBlock(v9);
  }
  else
  {
    if ( !v9 )
    {
      if ( v14 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v30);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v30);
        v14 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3, *a4, &BugCheckParameter2);
      v9 = BugCheckParameter2;
      SubKeyByNumber = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *a9 = v9;
  }
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v30);
  }
  return SubKeyByNumber;
}
