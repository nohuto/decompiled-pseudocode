/*
 * XREFs of RtlUnicodeStringCchCopyStringN @ 0x1405DEF84
 * Callers:
 *     PopPlInitWString @ 0x1409A00F0 (PopPlInitWString.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1405DF018 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCchCopyStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  unsigned __int16 Length; // r9
  unsigned __int64 MaximumLength; // rax
  wchar_t *Buffer; // r10
  __int16 v7; // cx
  NTSTATUS result; // eax
  size_t pcchNewDestLength; // [rsp+40h] [rbp+8h] BYREF

  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > (unsigned __int16)MaximumLength )
    return -1073741811;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  Buffer = DestinationString->Buffer;
  v7 = 0;
  if ( !Buffer && (Length || (_WORD)MaximumLength) )
    return -1073741811;
  pcchNewDestLength = 0LL;
  if ( cchToCopy <= 0x7FFF )
  {
    result = RtlWideCharArrayCopyStringWorker(Buffer, MaximumLength >> 1, &pcchNewDestLength, pszSrc, cchToCopy);
    v7 = pcchNewDestLength;
  }
  else
  {
    result = -1073741811;
  }
  DestinationString->Length = 2 * v7;
  return result;
}
