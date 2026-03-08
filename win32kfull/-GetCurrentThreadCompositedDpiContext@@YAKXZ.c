/*
 * XREFs of ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C01017CC
 * Callers:
 *     GetMonitorWorkRect @ 0x1C0101744 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C0101788 (GetMonitorRect.c)
 *     GetMonitorMenuRect @ 0x1C024E934 (GetMonitorMenuRect.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpiContext(__int64 a1)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v5; // rcx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  v2 = CurrentThreadDpiAwarenessContext;
  v3 = CurrentThreadDpiAwarenessContext;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
  {
    LOBYTE(v2) = CurrentThreadDpiAwarenessContext & 0xF;
    if ( !*((_QWORD *)PtiCurrentShared(v2) + 57)
      || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v5) + 57) + 8LL) + 64LL) & 1) == 0 )
    {
      return 18;
    }
  }
  return v3;
}
