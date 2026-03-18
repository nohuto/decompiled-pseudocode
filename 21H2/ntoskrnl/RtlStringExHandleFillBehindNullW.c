/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x14055F3B8
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140204630 (RtlStringCbPrintfExW.c)
 *     RtlStringCchPrintfExW @ 0x1402DFBC4 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
