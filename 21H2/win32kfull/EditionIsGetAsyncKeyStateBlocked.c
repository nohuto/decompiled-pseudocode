/*
 * XREFs of EditionIsGetAsyncKeyStateBlocked @ 0x1C011E580
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

_BOOL8 EditionIsGetAsyncKeyStateBlocked()
{
  __int64 ThreadWin32Thread; // rbx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return *(_QWORD *)(ThreadWin32Thread + 456) != grpdeskRitInput
      || (!gptiForeground || PsGetCurrentProcessWin32Process(gptiForeground) != *(_QWORD *)(gptiForeground + 424LL))
      && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 888), 0x18u);
}
