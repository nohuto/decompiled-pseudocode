/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C0019C74
 * Callers:
 *     EngGetRgnData @ 0x1C000D450 (EngGetRgnData.c)
 *     EngDeleteRgn @ 0x1C0019A50 (EngDeleteRgn.c)
 *     EngCombineRgn @ 0x1C0019AD0 (EngCombineRgn.c)
 *     EngCreateRectRgn @ 0x1C0019B70 (EngCreateRectRgn.c)
 *     EngSetRectRgn @ 0x1C0019BF0 (EngSetRectRgn.c)
 *     EngCopyRgn @ 0x1C0197690 (EngCopyRgn.c)
 *     EngEqualRgn @ 0x1C0197710 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C01977C0 (EngGetRgnBox.c)
 *     EngIntersectRgn @ 0x1C0197820 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C01978C0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C0197930 (EngRectInRgn.c)
 *     EngSubtractRgn @ 0x1C0197990 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C0197A30 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C0197AD0 (EngXorRgn.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
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
