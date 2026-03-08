/*
 * XREFs of ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0207CB4
 * Callers:
 *     SfnINSTRINGNULL @ 0x1C0034A70 (SfnINSTRINGNULL.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0034FC0 (SfnINLPCREATESTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C020C3B0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINSTRING @ 0x1C020FC00 (SfnINSTRING.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0212FB8 (fnHkINLPCBTCREATESTRUCT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C0109260 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall CaptureUnicodeCallbackData(
        struct _CAPTUREBUF *a1,
        CHAR *MultiByteString,
        ULONG MaxBytesInUnicodeString,
        void **a4)
{
  __int64 v5; // rdi
  unsigned __int8 *v8; // r14
  ULONG BytesInUnicodeString; // [rsp+58h] [rbp+10h] BYREF

  v5 = MaxBytesInUnicodeString;
  BytesInUnicodeString = 0;
  if ( !MultiByteString )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( MaxBytesInUnicodeString > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v8 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  if ( RtlMultiByteToUnicodeN(
         (PWCH)v8,
         MaxBytesInUnicodeString,
         &BytesInUnicodeString,
         MultiByteString,
         MaxBytesInUnicodeString >> 1) >= 0 )
  {
    *((_QWORD *)a1 + 2) = &v8[(v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
    *((_DWORD *)a1 + 1) -= v5;
    FixupCaptureDataOffsets(a1, a4, v8);
    return 0LL;
  }
  return 3221225473LL;
}
