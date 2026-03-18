/*
 * XREFs of NtUserfnKERNELONLY @ 0x1C0203090
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 NtUserfnKERNELONLY()
{
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return 0LL;
}
