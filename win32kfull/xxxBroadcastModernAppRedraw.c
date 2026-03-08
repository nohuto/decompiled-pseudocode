/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C01F6FF0
 * Callers:
 *     <none>
 * Callees:
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C00F3C20 (HandleDisplayChangeForInactiveDesktops.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00F7740 (xxxBroadcastDisplaySettingsChange.c)
 */

void xxxBroadcastModernAppRedraw()
{
  if ( grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(grpdeskRitInput, 0, 0, 0);
    HandleDisplayChangeForInactiveDesktops(grpdeskRitInput, 0);
  }
}
