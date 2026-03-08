/*
 * XREFs of CmpFindNameInListCellWithStatus @ 0x1407B3CA0
 * Callers:
 *     CmpFindNameInListWithStatus @ 0x1407A8DA0 (CmpFindNameInListWithStatus.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140A22AD4 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     CmpCompareTwoCompressedNames @ 0x14076D7AC (CmpCompareTwoCompressedNames.c)
 *     CmpCompareCompressedName @ 0x140775138 (CmpCompareCompressedName.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpFindNameInListCellWithStatus(
        ULONG_PTR BugCheckParameter3,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned int v11; // r14d
  unsigned int *v12; // r15
  int v13; // ebx
  __int64 CellFlat; // rax
  bool v15; // zf
  unsigned __int8 *v16; // r10
  unsigned __int16 v17; // di
  unsigned __int16 v18; // si
  unsigned __int16 *v19; // r9
  unsigned __int16 v20; // r11
  unsigned int v21; // ebx
  int v22; // ebx
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v25; // r11
  int v26; // eax
  struct _LIST_ENTRY *v27; // rax
  __int64 v28; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-40h] BYREF
  int v31; // [rsp+90h] [rbp+28h]

  v28 = 0LL;
  String2 = 0LL;
  HvpGetCellContextReinitialize(&v28);
  if ( a3 )
  {
    v11 = 0;
    v12 = a2;
    v13 = a5 & 0x10000;
    v31 = a5 & 0x10000;
    while ( 1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, *v12);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3);
      v15 = (*(_BYTE *)(CellFlat + 16) & 1) == 0;
      v16 = (unsigned __int8 *)(CellFlat + 20);
      v17 = *(_WORD *)(CellFlat + 2);
      String2.Buffer = (wchar_t *)(CellFlat + 20);
      String2.Length = v17;
      String2.MaximumLength = v17;
      if ( v15 )
      {
        if ( !v13 )
        {
          v26 = RtlCompareUnicodeString((PCUNICODE_STRING)a4, &String2, 1u);
LABEL_35:
          v22 = v26;
          goto LABEL_15;
        }
        v22 = -(int)CmpCompareCompressedName((__int64)&String2, *(unsigned __int8 **)(a4 + 8), *(_WORD *)a4, 0);
      }
      else
      {
        if ( v13 )
        {
          v26 = CmpCompareTwoCompressedNames(
                  *(unsigned __int8 **)(a4 + 8),
                  *(_WORD *)a4,
                  (unsigned __int8 *)(CellFlat + 20),
                  v17);
          goto LABEL_35;
        }
        v18 = *(_WORD *)a4 >> 1;
        v19 = *(unsigned __int16 **)(a4 + 8);
        if ( v18 )
        {
          while ( v17 )
          {
            v20 = *v19++;
            v21 = *v16++;
            if ( v20 != (_WORD)v21 )
            {
              if ( v20 >= 0x61u )
              {
                if ( v20 > 0x7Au )
                {
                  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                  v20 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v25);
                }
                else
                {
                  v20 -= 32;
                }
              }
              if ( v21 >= 0x61 )
              {
                if ( v21 > 0x7A )
                {
                  v27 = PsGetCurrentServerSiloGlobals();
                  LOWORD(v21) = NLS_UPCASE((__int64)v27[77].Flink, v21);
                }
                else
                {
                  LOWORD(v21) = v21 - 32;
                }
              }
              v22 = v20 - (unsigned __int16)v21;
              if ( v22 )
                goto LABEL_15;
            }
            --v17;
            if ( !--v18 )
              break;
          }
        }
        v22 = v18 - v17;
      }
LABEL_15:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v28);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v28);
      if ( !v22 )
      {
        result = 0LL;
        *a7 = a2[v11];
        if ( a6 )
          *a6 = v11;
        return result;
      }
      v13 = v31;
      ++v11;
      ++v12;
      if ( v11 >= a3 )
      {
        *a7 = -1;
        if ( a6 )
          *a6 = a3;
        return 3221225524LL;
      }
    }
  }
  *a7 = -1;
  if ( a6 )
    *a6 = 0;
  return 3221225524LL;
}
