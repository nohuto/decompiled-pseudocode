NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  unsigned __int16 Length; // r8
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rcx
  size_t v7; // rdx
  NTSTATUS result; // eax
  size_t pcchNewDestLength[3]; // [rsp+30h] [rbp-18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, pszFormat);
  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  Buffer = DestinationString->Buffer;
  v7 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  pcchNewDestLength[0] = 0LL;
  result = RtlWideCharArrayVPrintfWorker(Buffer, v7, pcchNewDestLength, pszFormat, va);
  DestinationString->Length = 2 * LOWORD(pcchNewDestLength[0]);
  return result;
}
