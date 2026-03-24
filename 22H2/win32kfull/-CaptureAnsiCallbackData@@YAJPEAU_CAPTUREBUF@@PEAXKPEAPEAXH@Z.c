/*
 * XREFs of ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C01692B4
 * Callers:
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C001E5E0 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0020F50 (SfnINLPCREATESTRUCT.c)
 *     SfnINSTRINGNULL @ 0x1C004FDF0 (SfnINSTRINGNULL.c)
 *     SfnINSTRING @ 0x1C011EB70 (SfnINSTRING.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C022BC60 (SfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C0023410 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall CaptureAnsiCallbackData(struct _CAPTUREBUF *a1, PCWCH UnicodeString, PCWCH a3, void **a4, int a5)
{
  int v6; // edi
  ULONG v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned __int8 *v13; // rsi
  ULONG v14; // ecx
  ULONG v15[10]; // [rsp+30h] [rbp-28h] BYREF
  ULONG BytesInMultiByteString; // [rsp+68h] [rbp+10h] BYREF

  v6 = (int)a3;
  BytesInMultiByteString = 0;
  v15[0] = 0;
  if ( !UnicodeString )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( a5 )
  {
    if ( RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString, 2 * (_DWORD)a3 - 2) < 0 )
      return 3221225473LL;
    v10 = BytesInMultiByteString + 2;
    if ( BytesInMultiByteString + 2 < BytesInMultiByteString )
    {
      v12 = -2147024362;
      v10 = -1;
    }
    else
    {
      v12 = 0;
    }
    BytesInMultiByteString = v10;
    v11 = v10;
    if ( v12 < 0 )
      return 2147483653LL;
  }
  else
  {
    v10 = 2 * (_DWORD)a3;
    if ( (*gpsi & 2) == 0 )
      v10 = (unsigned int)a3;
    BytesInMultiByteString = v10;
    v11 = v10;
  }
  if ( v11 > *((_DWORD *)a1 + 1) || v11 >= 0x7FFFFFFF )
    return 2147483653LL;
  v13 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  if ( RtlUnicodeToMultiByteN((PCHAR)v13, v10, v15, UnicodeString, 2 * v6) >= 0 )
  {
    v14 = v15[0];
    *((_QWORD *)a1 + 2) = &v13[(v15[0] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    *((_DWORD *)a1 + 1) -= v14;
    FixupCaptureDataOffsets(a1, a4, v13);
    return 0LL;
  }
  return 3221225473LL;
}
