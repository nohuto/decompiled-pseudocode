/*
 * XREFs of RtlUnicodeStringCchCopyStringN @ 0x14057F1F8
 * Callers:
 *     PopPlInitWString @ 0x1408F9B5C (PopPlInitWString.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x14057F2C8 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCchCopyStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  __int16 v3; // ax
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // rdi
  size_t v8; // rdx
  int v9; // r9d
  unsigned __int64 MaximumLength; // r10
  size_t pcchNewDestLength; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  Length = DestinationString->Length;
  Buffer = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > (unsigned __int16)MaximumLength || (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (Length || (_WORD)MaximumLength) )
  {
    v9 = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v8 = MaximumLength >> 1;
  }
  if ( v9 >= 0 )
  {
    pcchNewDestLength = 0LL;
    if ( cchToCopy <= 0x7FFF )
    {
      v9 = RtlWideCharArrayCopyStringWorker(Buffer, v8, &pcchNewDestLength, pszSrc, cchToCopy);
      v3 = pcchNewDestLength;
    }
    else
    {
      v9 = -1073741811;
    }
    DestinationString->Length = 2 * v3;
  }
  return v9;
}
