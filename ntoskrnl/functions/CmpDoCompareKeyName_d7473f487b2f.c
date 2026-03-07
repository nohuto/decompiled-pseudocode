__int64 __fastcall CmpDoCompareKeyName(ULONG_PTR a1, const UNICODE_STRING *a2, __int64 a3, unsigned int a4)
{
  bool v4; // zf
  __int64 CellPaged; // rax
  unsigned __int8 *v9; // r11
  unsigned __int16 v10; // r10
  unsigned __int16 *Buffer; // rbx
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // di
  unsigned int v14; // esi
  int v15; // edi
  int v17; // eax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v19; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v21 = 0xFFFFFFFFLL;
  v4 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  String2 = 0LL;
  if ( v4 )
    CellPaged = HvpGetCellPaged(a1);
  else
    CellPaged = HvpGetCellFlat(a1, a4);
  if ( !CellPaged )
    return 2LL;
  v9 = (unsigned __int8 *)(CellPaged + 76);
  if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
  {
    if ( !a3 )
    {
      v10 = a2->Length >> 1;
      Buffer = a2->Buffer;
      v12 = *(_WORD *)(CellPaged + 72);
      if ( v10 )
      {
        while ( v12 )
        {
          v13 = *Buffer++;
          v14 = *v9++;
          if ( v13 != (_WORD)v14 )
          {
            if ( v13 >= 0x61u )
            {
              if ( v13 > 0x7Au )
              {
                CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                v13 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v13);
              }
              else
              {
                v13 -= 32;
              }
            }
            if ( v14 >= 0x61 )
            {
              if ( v14 > 0x7A )
              {
                v19 = PsGetCurrentServerSiloGlobals();
                LOWORD(v14) = NLS_UPCASE((__int64)v19[77].Flink, v14);
              }
              else
              {
                LOWORD(v14) = v14 - 32;
              }
            }
            v15 = v13 - (unsigned __int16)v14;
            if ( v15 )
              goto LABEL_14;
          }
          --v12;
          if ( !--v10 )
            break;
        }
      }
      v15 = v10 - v12;
      goto LABEL_14;
    }
    v17 = CmpCompareTwoCompressedNames(
            *(unsigned __int8 **)(a3 + 8),
            *(_WORD *)a3,
            (unsigned __int8 *)(CellPaged + 76),
            *(_WORD *)(CellPaged + 72));
  }
  else
  {
    String2.Length = *(_WORD *)(CellPaged + 72);
    String2.MaximumLength = String2.Length;
    String2.Buffer = (wchar_t *)(CellPaged + 76);
    if ( a3 )
    {
      v15 = -(int)CmpCompareCompressedName((__int64)&String2, *(unsigned __int8 **)(a3 + 8), *(_WORD *)a3, 0);
      goto LABEL_14;
    }
    v17 = RtlCompareUnicodeString(a2, &String2, 1u);
  }
  v15 = v17;
LABEL_14:
  if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
    HvpReleaseCellFlat(a1, &v21);
  else
    HvpReleaseCellPaged(a1, &v21);
  if ( v15 )
    return ((v15 >> 31) & 0xFFFFFFFE) + 1;
  else
    return 0LL;
}
