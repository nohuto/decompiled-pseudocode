/*
 * XREFs of NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated @ 0x1C01FD7B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated @ 0x1C0272098 (DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated.c)
 */

_BOOL8 NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated()
{
  __int64 ThreadWin32Thread; // rax
  void *v1; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 456) + 8LL));
  return (int)DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated(v1) >= 0;
}
