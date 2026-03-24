/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1403CF4FC
 * Callers:
 *     RtlStringCbPrintfExW @ 0x14024F030 (RtlStringCbPrintfExW.c)
 *     RtlStringCchPrintfExW @ 0x14032EBA4 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
