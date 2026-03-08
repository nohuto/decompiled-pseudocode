/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1C003098C
 * Callers:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0030A10 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1C0030B48 (RIMPopulateExtendedMouseDeviceProperties.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C01C74DC (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS v6; // r10d
  unsigned __int64 Length; // r11
  USHORT MaximumLength; // ax

  v6 = 0;
  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
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
  *ppszDest = DestinationString->Buffer;
  *pcchDest = (unsigned __int64)DestinationString->MaximumLength >> 1;
  if ( pcchDestLength )
    *pcchDestLength = Length >> 1;
  return v6;
}
