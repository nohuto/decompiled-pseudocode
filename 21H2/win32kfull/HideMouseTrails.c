/*
 * XREFs of HideMouseTrails @ 0x1C01D4700
 * Callers:
 *     <none>
 * Callees:
 *     GreMovePointer @ 0x1C0016B30 (GreMovePointer.c)
 */

void HideMouseTrails()
{
  if ( gMouseTrailsToHide > 0 && _InterlockedDecrement(&gMouseTrailsToHide) < (int)WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
    GreMovePointer(*(_DWORD **)(gpDispInfo + 40LL), *(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 1);
}
