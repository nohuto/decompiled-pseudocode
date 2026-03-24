/*
 * XREFs of _IsQueueAttached @ 0x1C01D3350
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

_BOOL8 IsQueueAttached()
{
  return *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 392LL) > 1u;
}
