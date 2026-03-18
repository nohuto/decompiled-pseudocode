/*
 * XREFs of ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C016F2F4
 * Callers:
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00C2644 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C016F338 (-vMakeIso@DC@@QEAAXXZ.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsY(PDEVOBJ *this)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
    return (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    return *(unsigned int *)(*(_QWORD *)this + 2148LL);
}
