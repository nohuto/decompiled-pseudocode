/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C00CB6DC
 * Callers:
 *     EngCombineRgn @ 0x1C014B610 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C014B6B0 (EngCopyRgn.c)
 *     EngCreateRectRgn @ 0x1C014B730 (EngCreateRectRgn.c)
 *     EngDeleteRgn @ 0x1C014B7B0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014B830 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C014B8F0 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C014B950 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C014B9C0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C014BA60 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C014BAD0 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C014BB30 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C014BBC0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C014BC60 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C014BD00 (EngXorRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this)
{
  __int64 ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)this = ThreadWin32Thread;
  if ( ThreadWin32Thread )
    *(_DWORD *)(ThreadWin32Thread + 328) |= 0x20u;
  return this;
}
