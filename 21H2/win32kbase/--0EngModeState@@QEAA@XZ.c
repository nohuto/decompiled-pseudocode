/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C008EA90
 * Callers:
 *     EngGetRgnData @ 0x1C0009040 (EngGetRgnData.c)
 *     EngCombineRgn @ 0x1C008E080 (EngCombineRgn.c)
 *     EngDeleteRgn @ 0x1C008E120 (EngDeleteRgn.c)
 *     EngCreateRectRgn @ 0x1C008E2D0 (EngCreateRectRgn.c)
 *     EngSetRectRgn @ 0x1C008E8D0 (EngSetRectRgn.c)
 *     EngCopyRgn @ 0x1C0177A00 (EngCopyRgn.c)
 *     EngEqualRgn @ 0x1C0177A80 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C0177B40 (EngGetRgnBox.c)
 *     EngIntersectRgn @ 0x1C0177BA0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C0177C40 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C0177CB0 (EngRectInRgn.c)
 *     EngSubtractRgn @ 0x1C0177D10 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C0177DB0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C0177E50 (EngXorRgn.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  *(_QWORD *)this = v3;
  if ( v3 )
    *(_DWORD *)(v3 + 328) |= 0x10u;
  return this;
}
