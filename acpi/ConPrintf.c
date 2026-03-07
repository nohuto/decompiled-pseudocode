ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C0070460, 0x400uLL, pszFormat, va);
  if ( qword_1C006F918 )
    return qword_1C006F918(byte_1C0070460, qword_1C006F920);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C0070460);
}
