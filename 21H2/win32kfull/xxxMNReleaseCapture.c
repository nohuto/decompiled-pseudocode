/*
 * XREFs of xxxMNReleaseCapture @ 0x1C023AAFC
 * Callers:
 *     xxxMNStartMenu @ 0x1C0222640 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C0234A48 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C0237494 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C024A3F4 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     xxxReleaseCapture @ 0x1C00DAE50 (xxxReleaseCapture.c)
 */

void __fastcall xxxMNReleaseCapture(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 8);
    if ( (v1 & 0x40000) != 0 )
    {
      *(_DWORD *)(a1 + 8) = v1 & 0xFFFBFFFF;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
      xxxReleaseCapture();
      if ( gpqForeground )
      {
        v2 = *(_QWORD *)(gpqForeground + 112LL);
        if ( v2 )
        {
          if ( *(_QWORD *)(v2 + 16) == gptiCurrent )
            xxxWindowEvent(0x80000005, (struct tagWND *)v2, 0, 1u, 0x21u);
        }
      }
    }
  }
}
