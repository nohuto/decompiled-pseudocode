/*
 * XREFs of NtUserSetDesktopColorTransform @ 0x1C01DC6C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     DwmAsyncSetDesktopColorTransform @ 0x1C02703E0 (DwmAsyncSetDesktopColorTransform.c)
 */

_BOOL8 NtUserSetDesktopColorTransform()
{
  __int64 ThreadWin32Thread; // rax
  void *v1; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 456) + 8LL));
  return (int)DwmAsyncSetDesktopColorTransform(v1) >= 0;
}
