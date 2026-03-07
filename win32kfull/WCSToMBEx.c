__int64 __fastcall WCSToMBEx(
        unsigned __int16 a1,
        WCHAR *a2,
        int a3,
        PCHAR *a4,
        int MaxBytesInMultiByteString,
        ULONG BytesInMultiByteString)
{
  int v6; // eax
  __int64 v7; // rax
  ULONG BytesInUnicodeString; // r8d
  __int64 result; // rax
  NTSTATUS v10; // eax

  BytesInMultiByteString = 0;
  v6 = a3;
  if ( !MaxBytesInMultiByteString || !a3 || !a2 )
    return 0LL;
  if ( a3 == -1 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a2[v7] );
    v6 = v7 + 1;
  }
  else if ( a3 < -1 )
  {
    return 0LL;
  }
  if ( MaxBytesInMultiByteString < 0 )
    return 0LL;
  BytesInUnicodeString = 2 * v6;
  if ( a1 == NlsAnsiCodePage || !a1 )
  {
    v10 = RtlUnicodeToMultiByteN(*a4, MaxBytesInMultiByteString, &BytesInMultiByteString, a2, BytesInUnicodeString);
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      return BytesInMultiByteString;
    return 0LL;
  }
  result = ConvertToAndFromWideChar(a1, a2, BytesInUnicodeString, *a4, MaxBytesInMultiByteString, 0);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
