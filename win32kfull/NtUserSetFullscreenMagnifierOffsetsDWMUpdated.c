/*
 * XREFs of NtUserSetFullscreenMagnifierOffsetsDWMUpdated @ 0x1C01DCD30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated @ 0x1C026F77C (DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated.c)
 */

_BOOL8 __fastcall NtUserSetFullscreenMagnifierOffsetsDWMUpdated(__int64 a1, __int64 a2, float a3)
{
  __int64 ThreadWin32Thread; // rax
  void *v4; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v4 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 456) + 8LL));
  return (int)DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated(v4, SLODWORD(a3)) >= 0;
}
