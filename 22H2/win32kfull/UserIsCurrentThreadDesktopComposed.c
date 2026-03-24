/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C006A350
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C006A378 (IsThreadDesktopComposed.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 UserIsCurrentThreadDesktopComposed()
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  return IsThreadDesktopComposed(ThreadWin32Thread);
}
