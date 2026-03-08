/*
 * XREFs of RtlUnicodeStringValidateEx @ 0x1405A4CA8
 * Callers:
 *     NtSetCachedSigningLevel2 @ 0x1407FAFF0 (NtSetCachedSigningLevel2.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateEx(PCUNICODE_STRING SourceString, ULONG dwFlags)
{
  NTSTATUS result; // eax
  unsigned __int16 Length; // r8
  unsigned __int16 MaximumLength; // dx

  result = 0;
  if ( SourceString )
  {
    Length = SourceString->Length;
    if ( (SourceString->Length & 1) != 0 )
      return -1073741811;
    MaximumLength = SourceString->MaximumLength;
    if ( (MaximumLength & 1) != 0
      || Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !SourceString->Buffer && (Length || MaximumLength) )
    {
      return -1073741811;
    }
  }
  return result;
}
