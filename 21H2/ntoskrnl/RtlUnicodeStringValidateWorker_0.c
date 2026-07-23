/*
 * XREFs of RtlUnicodeStringValidateWorker_0 @ 0x1402AB6CC
 * Callers:
 *     RtlUnicodeStringCopy @ 0x1402AB600 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x14036F1D0 (RtlUnicodeStringValidateDestWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateWorker_0(PCUNICODE_STRING SourceString, const size_t cchMax, ULONG dwFlags)
{
  unsigned __int16 Length; // r8
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // dx

  Length = SourceString->Length;
  result = 0;
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
  return result;
}
