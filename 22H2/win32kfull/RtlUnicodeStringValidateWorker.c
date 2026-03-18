/*
 * XREFs of RtlUnicodeStringValidateWorker @ 0x1C0048004
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C0047820 (ReadPointerDeviceSettingsFull.c)
 *     EditionGetPointerDeviceConfigurationKey @ 0x1C0047C70 (EditionGetPointerDeviceConfigurationKey.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00482A8 (RtlUnicodeStringValidateDestWorker.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C00483D0 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateWorker(PCUNICODE_STRING SourceString, const size_t cchMax, ULONG dwFlags)
{
  USHORT Length; // r8
  NTSTATUS result; // eax
  USHORT MaximumLength; // dx

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
