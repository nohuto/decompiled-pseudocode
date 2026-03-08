/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1402BD9D8
 * Callers:
 *     RtlUnicodeStringCatString @ 0x1402BD420 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCat @ 0x1402BD900 (RtlUnicodeStringCat.c)
 *     PopPowerRequestStatsIdConcat @ 0x14079ABEC (PopPowerRequestStatsIdConcat.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14079B2C8 (CmpLogTransactionAbortedWithChildName.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x1409975B8 (PopIdleWakeGenerateInterruptDescriptionString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x1402BDA84 (RtlUnicodeStringValidateWorker_0.c)
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  __int64 v8; // rcx
  int v9; // r8d
  unsigned __int16 *v10; // r10
  unsigned __int64 *v11; // r11

  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
  v9 = RtlUnicodeStringValidateWorker_0(DestinationString, (const size_t)ppszDest, (ULONG)pcchDest);
  if ( v9 >= 0 )
  {
    if ( v10 )
    {
      *ppszDest = *(wchar_t **)(v8 + 8);
      *pcchDest = (unsigned __int64)v10[1] >> 1;
      if ( v11 )
        *v11 = (unsigned __int64)*v10 >> 1;
    }
  }
  return v9;
}
