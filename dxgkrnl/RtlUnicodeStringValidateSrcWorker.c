NTSTATUS __stdcall RtlUnicodeStringValidateSrcWorker(
        PCUNICODE_STRING SourceString,
        wchar_t **ppszSrc,
        size_t *pcchSrcLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  unsigned __int64 Length; // r10
  NTSTATUS v6; // r9d
  unsigned __int16 MaximumLength; // r8

  Length = SourceString->Length;
  v6 = 0;
  *ppszSrc = 0LL;
  *pcchSrcLength = 0LL;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = SourceString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || (unsigned __int16)Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !SourceString->Buffer && ((_WORD)Length || MaximumLength) )
  {
    return -1073741811;
  }
  *ppszSrc = SourceString->Buffer;
  *pcchSrcLength = Length >> 1;
  return v6;
}
