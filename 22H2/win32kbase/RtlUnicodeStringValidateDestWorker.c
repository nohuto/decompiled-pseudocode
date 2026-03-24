/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1C0181E10
 * Callers:
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1C00CC988 (RIMPopulateExtendedMouseDeviceProperties.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C016BD98 (RIMPopulateExtendedPointerDeviceProperties.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0181D94 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
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
  unsigned __int64 MaximumLength; // rax
  wchar_t *Buffer; // rdx

  v6 = 0;
  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
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
  *ppszDest = Buffer;
  *pcchDest = MaximumLength >> 1;
  if ( pcchDestLength )
    *pcchDestLength = Length >> 1;
  return v6;
}
