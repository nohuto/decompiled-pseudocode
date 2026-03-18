/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x140649CA0
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x140A16F94 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1405DF018 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCbCatStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToAppend)
{
  unsigned __int64 Length; // r9
  unsigned __int64 MaximumLength; // rax
  wchar_t *Buffer; // rcx
  size_t cchToCopy; // r8
  unsigned __int64 v8; // rdi
  NTSTATUS result; // eax
  size_t pcchNewDestLength; // [rsp+40h] [rbp+8h] BYREF

  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( (unsigned __int16)Length > (unsigned __int16)MaximumLength )
    return -1073741811;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  Buffer = DestinationString->Buffer;
  if ( !Buffer && ((_WORD)Length || (_WORD)MaximumLength) )
    return -1073741811;
  cchToCopy = cbToAppend >> 1;
  v8 = Length >> 1;
  if ( cchToCopy > 0x7FFF )
    return -1073741811;
  pcchNewDestLength = 0LL;
  result = RtlWideCharArrayCopyStringWorker(
             &Buffer[v8],
             (MaximumLength >> 1) - v8,
             &pcchNewDestLength,
             pszSrc,
             cchToCopy);
  DestinationString->Length = 2 * (pcchNewDestLength + v8);
  return result;
}
