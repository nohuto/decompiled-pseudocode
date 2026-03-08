/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1403AE140
 * Callers:
 *     RtlStringCchPrintfExW @ 0x140245C80 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x1402986C0 (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
