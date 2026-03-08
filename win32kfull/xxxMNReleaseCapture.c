/*
 * XREFs of xxxMNReleaseCapture @ 0x1C021C5E0
 * Callers:
 *     xxxMNStartMenu @ 0x1C0202834 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0234AE4 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00108E8 (xxxReleaseCapture.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 */

void __fastcall xxxMNReleaseCapture(__int64 a1)
{
  int v1; // eax
  struct tagWND *v2; // rdx

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 8);
    if ( (v1 & 0x40000) != 0 )
    {
      *(_DWORD *)(a1 + 8) = v1 & 0xFFFBFFFF;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x100000u;
      xxxReleaseCapture();
      if ( gpqForeground )
      {
        v2 = *(struct tagWND **)(gpqForeground + 120LL);
        if ( v2 )
        {
          if ( *((_QWORD *)v2 + 2) == gptiCurrent )
            xxxWindowEvent(0x80000005, v2, 0, 1u, 33);
        }
      }
    }
  }
}
