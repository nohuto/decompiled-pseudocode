__int64 __fastcall CaptureAnsiCallbackData(
        struct _CAPTUREBUF *a1,
        PCWCH UnicodeString,
        ULONG MaxBytesInMultiByteString,
        void **a4)
{
  CHAR *v8; // rsi
  ULONG v9; // r8d
  ULONG v10; // edx
  ULONG v12; // ecx
  ULONG v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0;
  if ( !UnicodeString )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( 2 * (unsigned __int64)MaxBytesInMultiByteString <= *((unsigned int *)a1 + 1) )
  {
    v8 = (CHAR *)*((_QWORD *)a1 + 2);
    v9 = 2 * MaxBytesInMultiByteString;
    v10 = 2 * MaxBytesInMultiByteString;
    if ( (*gpsi & 2) == 0 )
      v10 = MaxBytesInMultiByteString;
    if ( RtlUnicodeToMultiByteN(v8, v10, &v13, UnicodeString, v9) < 0 )
      return 3221225473LL;
    v12 = v13;
    *((_QWORD *)a1 + 2) = &v8[(v13 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    *((_DWORD *)a1 + 1) -= v12;
    FixupCaptureDataOffsets(a1, a4, (unsigned __int8 *)v8);
    return 0LL;
  }
  return 2147483653LL;
}
