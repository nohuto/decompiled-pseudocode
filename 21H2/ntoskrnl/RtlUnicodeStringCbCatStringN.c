/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x1405C0E2C
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x140969E40 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x14057F2C8 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCbCatStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToAppend)
{
  unsigned __int64 Length; // r9
  wchar_t *Buffer; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  NTSTATUS result; // eax
  unsigned __int64 MaximumLength; // r8
  size_t cchToCopy; // r10
  size_t pcchNewDestLength; // [rsp+40h] [rbp+8h] BYREF

  Length = DestinationString->Length;
  Buffer = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  result = 0;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || (unsigned __int16)Length > (unsigned __int16)MaximumLength
    || (_WORD)MaximumLength == 0xFFFF )
  {
    return -1073741811;
  }
  if ( !DestinationString->Buffer && ((_WORD)Length || (_WORD)MaximumLength) )
  {
    result = -1073741811;
  }
  else
  {
    v8 = MaximumLength >> 1;
    Buffer = DestinationString->Buffer;
    v9 = Length >> 1;
  }
  if ( result >= 0 )
  {
    cchToCopy = cbToAppend >> 1;
    if ( cchToCopy <= 0x7FFF )
    {
      pcchNewDestLength = 0LL;
      result = RtlWideCharArrayCopyStringWorker(&Buffer[v9], v8 - v9, &pcchNewDestLength, pszSrc, cchToCopy);
      DestinationString->Length = 2 * (pcchNewDestLength + v9);
      return result;
    }
    return -1073741811;
  }
  return result;
}
