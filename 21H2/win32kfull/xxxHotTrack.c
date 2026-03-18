/*
 * XREFs of xxxHotTrack @ 0x1C011F23C
 * Callers:
 *     xxxTrackMouseMove @ 0x1C007E59C (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00A184C (xxxCancelMouseMoveTracking.c)
 * Callees:
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023E474 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 */

__int64 __fastcall xxxHotTrack(struct tagWND *a1, int a2, int a3)
{
  if ( (_WORD)a2 == 69 )
    return xxxHotTrackMenu(a1, HIWORD(a2), a3);
  else
    return 0LL;
}
