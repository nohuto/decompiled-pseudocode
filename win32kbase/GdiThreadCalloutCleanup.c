/*
 * XREFs of GdiThreadCalloutCleanup @ 0x1C01990E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GdiThreadCalloutCleanup(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(a1);
  return DxDdThreadCallout(ThreadWin32Thread + 80, 0LL);
}
