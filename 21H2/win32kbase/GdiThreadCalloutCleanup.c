/*
 * XREFs of GdiThreadCalloutCleanup @ 0x1C00C4EF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GdiThreadCalloutCleanup(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(a1);
  return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C02519D0)(ThreadWin32Thread + 80, 0LL);
}
