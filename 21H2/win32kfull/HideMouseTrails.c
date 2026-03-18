/*
 * XREFs of HideMouseTrails @ 0x1C01D04A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 */

void HideMouseTrails()
{
  if ( gMouseTrailsToHide > 0 && _InterlockedDecrement(&gMouseTrailsToHide) < SLODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
    CursorApiRouter::MovePointer(
      gpsi,
      *(HDEV *)(gpDispInfo + 40LL),
      *(_DWORD *)(gpsi + 4960LL),
      *(_DWORD *)(gpsi + 4964LL),
      1u);
}
