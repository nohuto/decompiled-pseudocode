/*
 * XREFs of PspEnsureGuiThreadAndBatchFlush @ 0x1409B1C08
 * Callers:
 *     PsSyscallProviderDispatch @ 0x1409B1700 (PsSyscallProviderDispatch.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x140776D40 (PsConvertToGuiThread.c)
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspEnsureGuiThreadAndBatchFlush(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 120) & 0x200080) == 0 && (int)PsConvertToGuiThread() < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 5952LL) )
    PsInvokeWin32Callout(7, 0LL, 0, 0LL);
  return 0LL;
}
