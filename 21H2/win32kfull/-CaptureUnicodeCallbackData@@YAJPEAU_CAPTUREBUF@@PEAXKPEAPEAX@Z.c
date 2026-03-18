/*
 * XREFs of ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C014A160
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C006ACD0 (SfnINLPCREATESTRUCT.c)
 *     SfnINSTRINGNULL @ 0x1C00EC7F0 (SfnINSTRINGNULL.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C013F9B0 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0225FB0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINSTRING @ 0x1C0228520 (SfnINSTRING.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C0080430 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall CaptureUnicodeCallbackData(
        struct _CAPTUREBUF *a1,
        CHAR *MultiByteString,
        ULONG MaxBytesInUnicodeString,
        void **a4)
{
  __int64 v5; // rdi
  WCHAR *v7; // r14
  ULONG BytesInUnicodeString; // [rsp+58h] [rbp+10h] BYREF

  v5 = MaxBytesInUnicodeString;
  BytesInUnicodeString = 0;
  if ( !MultiByteString )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( MaxBytesInUnicodeString <= *((_DWORD *)a1 + 1) )
  {
    v7 = (WCHAR *)*((_QWORD *)a1 + 2);
    if ( RtlMultiByteToUnicodeN(
           v7,
           MaxBytesInUnicodeString,
           &BytesInUnicodeString,
           MultiByteString,
           MaxBytesInUnicodeString >> 1) < 0 )
      return 3221225473LL;
    *((_QWORD *)a1 + 2) = (char *)v7 + ((v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_DWORD *)a1 + 1) -= v5;
    FixupCaptureDataOffsets(a1, a4, (unsigned __int8 *)v7);
    return 0LL;
  }
  return 2147483653LL;
}
