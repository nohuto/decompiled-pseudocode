/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1403CFD6C
 * Callers:
 *     RtlStringCchPrintfExW @ 0x140253AD4 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x1402F3F10 (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
