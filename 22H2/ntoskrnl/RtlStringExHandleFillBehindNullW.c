/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1403B2F00
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140226370 (RtlStringCbPrintfExW.c)
 *     RtlStringCchPrintfExW @ 0x14022B740 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
