/*
 * XREFs of RtlUnicodeStringCchCopyStringN @ 0x14059FC08
 * Callers:
 *     PopPlInitWString @ 0x14099D8D0 (PopPlInitWString.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x14059FCA0 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCchCopyStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  unsigned __int16 Length; // r9
  unsigned __int16 MaximumLength; // ax
  __int16 v7; // cx
  wchar_t *Buffer; // rax
  size_t v9; // rdx
  NTSTATUS result; // eax
  size_t pcchNewDestLength; // [rsp+40h] [rbp+8h] BYREF

  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  v7 = 0;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
    return -1073741811;
  Buffer = DestinationString->Buffer;
  v9 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  pcchNewDestLength = 0LL;
  if ( cchToCopy <= 0x7FFF )
  {
    result = RtlWideCharArrayCopyStringWorker(Buffer, v9, &pcchNewDestLength, pszSrc, cchToCopy);
    v7 = pcchNewDestLength;
  }
  else
  {
    result = -1073741811;
  }
  DestinationString->Length = 2 * v7;
  return result;
}
