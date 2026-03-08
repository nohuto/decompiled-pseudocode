/*
 * XREFs of CmpCheckLexicographicalOrder @ 0x1407B0610
 * Callers:
 *     CmpCheckRegistry2 @ 0x1407B3F40 (CmpCheckRegistry2.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x140775138 (CmpCompareCompressedName.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpCheckLexicographicalOrder(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        unsigned int a3)
{
  bool v3; // zf
  unsigned int v4; // ebx
  __int64 CellPaged; // rax
  __int64 v7; // rdi
  _WORD *CellFlat; // rax
  _WORD *v9; // r15
  unsigned __int8 *v10; // r11
  __int16 v11; // cx
  unsigned __int8 *v12; // rbx
  unsigned __int16 v13; // r10
  unsigned __int16 v14; // r9
  unsigned int v15; // esi
  unsigned int v16; // edi
  int v17; // ecx
  unsigned int v18; // ebx
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v22; // r8
  __int64 v23; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-48h] BYREF
  UNICODE_STRING String1; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+38h] BYREF

  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v26 = 0xFFFFFFFFLL;
  v4 = BugCheckParameter4;
  v23 = 0xFFFFFFFFLL;
  String1 = 0LL;
  String2 = 0LL;
  if ( v3 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a3);
  v7 = CellPaged;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v4);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
  v9 = CellFlat;
  if ( !v7 || !CellFlat )
  {
    v18 = -1073741670;
    if ( !v7 )
      goto LABEL_21;
    goto LABEL_19;
  }
  v10 = (unsigned __int8 *)(CellFlat + 38);
  v11 = CellFlat[1] & 0x20;
  v12 = (unsigned __int8 *)(v7 + 76);
  if ( (*(_BYTE *)(v7 + 2) & 0x20) == 0 )
  {
    String2.Buffer = (wchar_t *)(v7 + 76);
    if ( v11 )
    {
      v22 = CellFlat[36];
      String2.Length = *(_WORD *)(v7 + 72);
      String2.MaximumLength = String2.Length;
      if ( (int)CmpCompareCompressedName((__int64)&String2, v10, v22, 0) <= 0 )
      {
        v18 = -1073741492;
        goto LABEL_19;
      }
    }
    else
    {
      String1.Length = CellFlat[36];
      String1.MaximumLength = String1.Length;
      String2.Length = *(_WORD *)(v7 + 72);
      String2.MaximumLength = String2.Length;
      String1.Buffer = CellFlat + 38;
      if ( RtlCompareUnicodeString(&String1, &String2, 1u) >= 0 )
      {
        v18 = -1073741492;
        goto LABEL_19;
      }
    }
LABEL_18:
    v18 = 0;
    goto LABEL_19;
  }
  v13 = CellFlat[36];
  v14 = *(_WORD *)(v7 + 72);
  if ( !v11 )
  {
    String1.Buffer = CellFlat + 38;
    String1.Length = v13;
    String1.MaximumLength = v13;
    if ( (int)CmpCompareCompressedName((__int64)&String1, (unsigned __int8 *)(v7 + 76), v14, 0) >= 0 )
    {
      v18 = -1073741492;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( v13 )
  {
    while ( v14 )
    {
      v15 = *v10++;
      v16 = *v12++;
      if ( (_WORD)v15 != (_WORD)v16 )
      {
        if ( v15 >= 0x61 )
        {
          if ( v15 > 0x7A )
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            LOWORD(v15) = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v15);
          }
          else
          {
            LOWORD(v15) = v15 - 32;
          }
        }
        if ( v16 >= 0x61 )
        {
          if ( v16 > 0x7A )
          {
            v20 = PsGetCurrentServerSiloGlobals();
            LOWORD(v16) = NLS_UPCASE((__int64)v20[77].Flink, v16);
          }
          else
          {
            LOWORD(v16) = v16 - 32;
          }
        }
        v17 = (unsigned __int16)v15 - (unsigned __int16)v16;
        if ( (unsigned __int16)v15 != (unsigned __int16)v16 )
          goto LABEL_17;
      }
      --v14;
      if ( !--v13 )
        break;
    }
  }
  v17 = v13 - v14;
LABEL_17:
  if ( v17 < 0 )
    goto LABEL_18;
  v18 = -1073741492;
LABEL_19:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v26);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v26);
LABEL_21:
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v23);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v23);
  }
  return v18;
}
