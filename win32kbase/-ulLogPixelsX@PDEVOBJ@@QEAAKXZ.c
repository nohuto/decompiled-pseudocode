/*
 * XREFs of ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C018C364
 * Callers:
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00D0464 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C018C3EC (-vMakeIso@DC@@QEAAXXZ.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsX(PDEVOBJ *this)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
    return (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    return *(unsigned int *)(*(_QWORD *)this + 2144LL);
}
