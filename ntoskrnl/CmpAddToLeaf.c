/*
 * XREFs of CmpAddToLeaf @ 0x1407A4520
 * Callers:
 *     CmpAddSubKeyToList @ 0x1407A4300 (CmpAddSubKeyToList.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x140786860 (CmpGenerateFastLeafHintForUnicodeString.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpHashUnicodeComponent @ 0x1407A480C (CmpHashUnicodeComponent.c)
 *     HvReallocateCell @ 0x1407A5D90 (HvReallocateCell.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1407AE0D0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpCompareInIndex @ 0x1407AE250 (CmpCompareInIndex.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpAddToLeaf(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        int a3,
        unsigned __int16 *a4,
        unsigned int *a5)
{
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  int SubKeyInLeafWithStatus; // esi
  __int64 CellFlat; // rax
  _WORD *v11; // rbx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // esi
  int v15; // ecx
  _WORD *v16; // r14
  __int64 v17; // rsi
  int v18; // eax
  int v19; // eax
  int FastLeafHintForUnicodeString; // eax
  int v22; // eax
  unsigned int v23; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-1Ch] BYREF
  int v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h] BYREF

  v26 = 0LL;
  v25 = 0;
  v24 = 0;
  v7 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v26);
  v8 = -1;
  SubKeyInLeafWithStatus = HvpMarkCellDirty(BugCheckParameter3, v7);
  if ( SubKeyInLeafWithStatus < 0 )
    return (unsigned int)SubKeyInLeafWithStatus;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v7);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v11 = (_WORD *)CellFlat;
  v12 = *(unsigned __int16 *)(CellFlat + 2);
  if ( (_WORD)v12 == 0xFFFF )
  {
    SubKeyInLeafWithStatus = -1073741670;
  }
  else
  {
    v13 = -4 - *((_DWORD *)v11 - 1);
    if ( *v11 == 26988 )
    {
      v16 = 0LL;
      v15 = v13 - 4 * v12;
      v14 = 4;
    }
    else
    {
      v14 = 8;
      v15 = v13 - 8 * v12;
      v16 = v11;
    }
    v23 = v7;
    v8 = v7;
    if ( v15 - 4 < v14 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v26);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v26);
      v27 = 0LL;
      v22 = HvReallocateCell(BugCheckParameter3, v7, (__int64)&v23, (__int64)&v27, (__int64)&v26);
      v11 = (_WORD *)v27;
      SubKeyInLeafWithStatus = v22;
      v8 = v23;
      if ( v22 < 0 )
        goto LABEL_25;
      if ( v16 )
        v16 = (_WORD *)v27;
    }
    SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(
                               BugCheckParameter3,
                               (_DWORD)v11,
                               (_DWORD)a4,
                               0,
                               (__int64)&v25,
                               (__int64)&v24);
    if ( SubKeyInLeafWithStatus == -1073741772 )
    {
      v17 = v24;
      if ( v24 == (unsigned __int16)v11[1] )
        goto LABEL_16;
      v18 = CmpCompareInIndex(BugCheckParameter3, (_DWORD)a4, 0, v24, (__int64)v11, (__int64)&v25);
      if ( v18 != 2 )
      {
        if ( v18 > 0 )
          v17 = (unsigned int)(v17 + 1);
        v19 = (unsigned __int16)v11[1];
        if ( (_DWORD)v17 != v19 )
        {
          if ( v16 )
          {
            memmove(
              &v16[4 * (unsigned int)(v17 + 1) + 2],
              &v16[4 * v17 + 2],
              8LL * ((unsigned __int16)v16[1] - (unsigned int)v17));
LABEL_17:
            *(_DWORD *)&v16[4 * v17 + 2] = a3;
            if ( *v16 == 26732 )
              FastLeafHintForUnicodeString = CmpHashUnicodeComponent(a4);
            else
              FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString(a4);
            *(_DWORD *)&v16[4 * v17 + 4] = FastLeafHintForUnicodeString;
            goto LABEL_20;
          }
          memmove(
            &v11[2 * (unsigned int)(v17 + 1) + 2],
            &v11[2 * (unsigned int)v17 + 2],
            4LL * (unsigned int)(v19 - v17));
LABEL_42:
          *(_DWORD *)&v11[2 * v17 + 2] = a3;
LABEL_20:
          ++v11[1];
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v26);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v26);
          v11 = 0LL;
          if ( v8 != v7 )
            HvFreeCell(BugCheckParameter3, v7);
          *a5 = v8;
          v8 = -1;
          SubKeyInLeafWithStatus = 0;
          goto LABEL_25;
        }
LABEL_16:
        if ( v16 )
          goto LABEL_17;
        goto LABEL_42;
      }
      SubKeyInLeafWithStatus = -1073741670;
    }
  }
LABEL_25:
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v26);
  }
  if ( v8 != -1 && v8 != v7 )
    HvFreeCell(BugCheckParameter3, v8);
  return (unsigned int)SubKeyInLeafWithStatus;
}
