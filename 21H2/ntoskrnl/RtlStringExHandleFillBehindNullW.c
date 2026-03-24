/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1403CFBFC
 * Callers:
 *     RtlStringCbPrintfExW @ 0x14024F6C0 (RtlStringCbPrintfExW.c)
 *     RtlStringCchPrintfExW @ 0x140265B34 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
