/*
 * XREFs of RtlValidateUnicodeString @ 0x1402D8DC0
 * Callers:
 *     RtlDuplicateUnicodeString @ 0x140761970 (RtlDuplicateUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlValidateUnicodeString(ULONG Flags, PCUNICODE_STRING String)
{
  NTSTATUS result; // eax
  unsigned __int16 Length; // r8
  unsigned __int16 MaximumLength; // cx

  result = 0;
  if ( Flags )
    return -1073741811;
  if ( String )
  {
    Length = String->Length;
    if ( (String->Length & 1) != 0 )
      return -1073741811;
    MaximumLength = String->MaximumLength;
    if ( (MaximumLength & 1) != 0
      || Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !String->Buffer && (Length || MaximumLength) )
    {
      return -1073741811;
    }
  }
  return result;
}
