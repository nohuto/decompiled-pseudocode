/*
 * XREFs of xxxMNReleaseCapture @ 0x1C0219A20
 * Callers:
 *     xxxMNStartMenu @ 0x1C01FFC8C (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C0216E04 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0231DD0 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0011688 (xxxReleaseCapture.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
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
