/*
 * XREFs of CmpClearKeyAccessBits @ 0x1408810DC
 * Callers:
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByNumber @ 0x1407AD320 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpLogClearAccessBitsEvent @ 0x140A0CEC0 (CmpLogClearAccessBitsEvent.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpClearKeyAccessBits(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  _QWORD *Pool2; // rsi
  __int64 v4; // r14
  unsigned int v5; // ecx
  int SubKeyByNumber; // edi
  unsigned int v8; // r13d
  ULONG_PTR v9; // rdx
  __int64 CellFlat; // rax
  __int64 v11; // r15
  unsigned int v12; // r8d
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+50h] BYREF
  int v16; // [rsp+88h] [rbp+58h]

  v15 = 0;
  v13[0] = 0xFFFFFFFFLL;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 4096LL, 830106947LL);
  if ( !Pool2 )
    return 3221225626LL;
  v4 = 0LL;
  v5 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  *Pool2 = v5;
  if ( v5 == -1 )
  {
    SubKeyByNumber = 0;
    goto LABEL_4;
  }
  v8 = 0;
  v16 = *(_DWORD *)(BugCheckParameter3 + 104);
  while ( 1 )
  {
    v9 = LODWORD(Pool2[v4]);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v9, v13);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v9, (unsigned int *)v13);
    v11 = CellFlat;
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      goto LABEL_4;
    }
    if ( *(_BYTE *)(CellFlat + 12) )
    {
      SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, LODWORD(Pool2[v4]), 0);
      if ( SubKeyByNumber < 0 )
        goto LABEL_23;
      *(_BYTE *)(v11 + 12) = 0;
      ++v8;
    }
    v12 = HIDWORD(Pool2[v4]);
    if ( v12 >= *(_DWORD *)(v11 + 20) || (_DWORD)v4 == 511 )
      break;
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3, (_DWORD *)v11, v12, &v15);
    if ( SubKeyByNumber < 0 )
      goto LABEL_23;
    ++HIDWORD(Pool2[v4]);
    v4 = (unsigned int)(v4 + 1);
    Pool2[v4] = v15;
LABEL_19:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v13);
  }
  if ( (_DWORD)v4 )
  {
    v4 = (unsigned int)(v4 - 1);
    goto LABEL_19;
  }
  CmpLogClearAccessBitsEvent(a2, v8, (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 104) - v16) >> 3);
  SubKeyByNumber = 0;
LABEL_23:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v13);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v13);
LABEL_4:
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SubKeyByNumber;
}
