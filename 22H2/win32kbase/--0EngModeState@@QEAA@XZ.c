/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C00CB83C
 * Callers:
 *     EngCombineRgn @ 0x1C014B900 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C014B9A0 (EngCopyRgn.c)
 *     EngCreateRectRgn @ 0x1C014BA20 (EngCreateRectRgn.c)
 *     EngDeleteRgn @ 0x1C014BAA0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014BB20 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C014BBE0 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C014BC40 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C014BCB0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C014BD50 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C014BDC0 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C014BE20 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C014BEB0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C014BF50 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C014BFF0 (EngXorRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
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
