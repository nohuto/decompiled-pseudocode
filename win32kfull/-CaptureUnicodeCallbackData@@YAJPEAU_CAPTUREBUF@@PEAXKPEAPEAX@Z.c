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
