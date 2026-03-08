/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x1406BB424
 * Callers:
 *     CmpRemoveSubKey @ 0x1406BB374 (CmpRemoveSubKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A262F8 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A266F0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellContextMove @ 0x1407A69E8 (HvpGetCellContextMove.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     CmpFindSubKeyInRoot @ 0x1407ADE40 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1407AE0D0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter3, int *a2, unsigned int a3)
{
  int v3; // esi
  _WORD *v6; // r13
  _WORD *CellFlat; // rax
  __int16 v9; // r12
  bool v10; // zf
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  _WORD *CellPaged; // rax
  _WORD *v14; // rdi
  UNICODE_STRING *p_DestinationString; // r9
  UNICODE_STRING *v16; // r8
  unsigned int v17; // ecx
  unsigned __int16 v18; // ax
  unsigned int v19; // edx
  __int64 v20; // r9
  size_t v21; // r8
  _WORD *v22; // rdx
  _WORD *v23; // rcx
  char v24; // si
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  int SubKeyInRoot; // [rsp+30h] [rbp-30h]
  _DWORD v29[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v30[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v31[2]; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+40h] BYREF
  int *v34; // [rsp+A8h] [rbp+48h]
  int v35; // [rsp+B8h] [rbp+58h] BYREF

  v34 = a2;
  v3 = -1;
  v31[0] = -1;
  v31[1] = 0;
  v29[0] = -1;
  v29[1] = 0;
  v30[0] = -1;
  v30[1] = 0;
  LODWORD(BugCheckParameter4) = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, a3);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
  if ( !CellFlat )
    return 0;
  v9 = CellFlat[1] & 0x20;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  DestinationString.Length = CellFlat[36];
  DestinationString.MaximumLength = DestinationString.Length;
  DestinationString.Buffer = CellFlat + 38;
  if ( v10 )
    HvpReleaseCellPaged(BugCheckParameter3, v31);
  else
    HvpReleaseCellFlat(BugCheckParameter3, v31);
  v11 = *a2;
  v12 = *a2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v11);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
  v14 = CellPaged;
  if ( !CellPaged )
    return 0;
  SubKeyInRoot = 0x80000000;
  if ( *CellPaged != 26994 )
    goto LABEL_10;
  SubKeyInRoot = CmpFindSubKeyInRoot(BugCheckParameter3, (__int64)&BugCheckParameter4);
  if ( SubKeyInRoot < 0 )
  {
    v24 = 0;
LABEL_20:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v29);
LABEL_22:
    if ( !v6 )
      return v24;
    goto LABEL_33;
  }
  v6 = v14;
  HvpGetCellContextMove(v30, v29);
  v12 = BugCheckParameter4;
  v26 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4)
      : HvpGetCellPaged(BugCheckParameter3);
  v14 = (_WORD *)v26;
  if ( v26 )
  {
LABEL_10:
    v35 = 0;
    if ( v9 )
    {
      p_DestinationString = &DestinationString;
      LODWORD(v16) = 0;
    }
    else
    {
      LODWORD(p_DestinationString) = 0;
      v16 = &DestinationString;
    }
    CmpFindSubKeyInLeafWithStatus(
      BugCheckParameter3,
      (_DWORD)v14,
      (_DWORD)v16,
      (_DWORD)p_DestinationString,
      (__int64)&BugCheckParameter4,
      (__int64)&v35);
    v17 = v35;
    if ( v35 < 0 )
    {
      v24 = 0;
LABEL_19:
      if ( !v14 )
        goto LABEL_22;
      goto LABEL_20;
    }
    v18 = v14[1] - 1;
    v14[1] = v18;
    if ( v18 )
    {
      v3 = v11;
      if ( v17 < v18 )
      {
        v19 = v18 - v17;
        v20 = v17 + 1;
        if ( *v14 == 26988 )
        {
          v21 = 4LL * v19;
          v22 = &v14[2 * v20 + 2];
          v23 = &v14[2 * v17 + 2];
        }
        else
        {
          v21 = 8LL * v19;
          v22 = &v14[4 * v20 + 2];
          v23 = &v14[4 * v17 + 2];
        }
        goto LABEL_17;
      }
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v29);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v29);
      v14 = 0LL;
      HvFreeCell(BugCheckParameter3, v12);
      if ( !v6 )
        goto LABEL_18;
      v27 = v6[1] - 1;
      v6[1] = v27;
      if ( !v27 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v30);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v30);
        v6 = 0LL;
        HvFreeCell(BugCheckParameter3, v11);
        goto LABEL_18;
      }
      v3 = v11;
      if ( SubKeyInRoot < (unsigned int)v27 )
      {
        v21 = 4LL * ((unsigned int)v27 - SubKeyInRoot);
        v22 = &v6[2 * (SubKeyInRoot + 1) + 2];
        v23 = &v6[2 * SubKeyInRoot + 2];
LABEL_17:
        memmove(v23, v22, v21);
      }
    }
LABEL_18:
    *v34 = v3;
    v24 = 1;
    goto LABEL_19;
  }
  v24 = 0;
LABEL_33:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v30);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v30);
  return v24;
}
