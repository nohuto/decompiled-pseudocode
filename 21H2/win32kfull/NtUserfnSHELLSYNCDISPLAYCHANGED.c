/*
 * XREFs of NtUserfnSHELLSYNCDISPLAYCHANGED @ 0x1C0203BE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 NtUserfnSHELLSYNCDISPLAYCHANGED()
{
  __int64 v0; // rdx

  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  UserSetLastError(5LL, v0);
  return 0LL;
}
