/*
 * XREFs of ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C02C18B8
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C02CFA80 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

bool __fastcall UMPDOBJ::bTryAcquireExclussiveAccess(UMPDOBJ *this)
{
  return _InterlockedCompareExchange64(
           (volatile signed __int64 *)this + 3,
           W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
           0LL) == 0;
}
