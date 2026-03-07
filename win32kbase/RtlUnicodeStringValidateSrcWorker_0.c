NTSTATUS __stdcall RtlUnicodeStringValidateSrcWorker_0(
        PCUNICODE_STRING SourceString,
        wchar_t **ppszSrc,
        size_t *pcchSrcLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS v5; // r9d
  USHORT Length; // r10
  USHORT MaximumLength; // cx
  wchar_t *Buffer; // rcx
  size_t v10; // rax

  v5 = 0;
  *ppszSrc = 0LL;
  *pcchSrcLength = 0LL;
  if ( !SourceString )
    goto LABEL_11;
  Length = SourceString->Length;
  if ( (SourceString->Length & 1) == 0 )
  {
    MaximumLength = SourceString->MaximumLength;
    if ( (MaximumLength & 1) == 0
      && Length <= MaximumLength
      && MaximumLength != 0xFFFF
      && (SourceString->Buffer || !Length && !MaximumLength) )
    {
      Buffer = SourceString->Buffer;
      v10 = (unsigned __int64)SourceString->Length >> 1;
      *ppszSrc = Buffer;
      *pcchSrcLength = v10;
      if ( Buffer )
        return v5;
LABEL_11:
      *ppszSrc = (wchar_t *)&word_1C02856D8;
      return v5;
    }
  }
  return -1073741811;
}
