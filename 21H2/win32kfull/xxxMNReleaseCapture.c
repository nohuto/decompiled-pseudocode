/*
 * XREFs of xxxMNReleaseCapture @ 0x1C023346C
 * Callers:
 *     xxxMNStartMenu @ 0x1C021C1CC (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0245A6C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
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
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
      xxxReleaseCapture();
      if ( gpqForeground )
      {
        v2 = *(struct tagWND **)(gpqForeground + 112LL);
        if ( v2 )
        {
          if ( *((_QWORD *)v2 + 2) == gptiCurrent )
            xxxWindowEvent(0x80000005, v2, 0, 1u, 33);
        }
      }
    }
  }
}
