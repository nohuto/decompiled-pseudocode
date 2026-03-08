/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x14066BEEC
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x140A539A4 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x14059FCA0 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCbCatStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToAppend)
{
  unsigned __int64 Length; // r9
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  size_t cchToCopy; // r8
  NTSTATUS result; // eax
  size_t pcchNewDestLength; // [rsp+40h] [rbp+8h] BYREF

  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || (unsigned __int16)Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && ((_WORD)Length || MaximumLength) )
  {
    return -1073741811;
  }
  Buffer = DestinationString->Buffer;
  v8 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  v9 = Length >> 1;
  cchToCopy = cbToAppend >> 1;
  if ( cchToCopy > 0x7FFF )
    return -1073741811;
  pcchNewDestLength = 0LL;
  result = RtlWideCharArrayCopyStringWorker(&Buffer[v9], v8 - v9, &pcchNewDestLength, pszSrc, cchToCopy);
  DestinationString->Length = 2 * (pcchNewDestLength + v9);
  return result;
}
