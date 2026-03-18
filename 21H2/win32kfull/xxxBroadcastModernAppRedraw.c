/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C0211CE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00F2460 (xxxBroadcastDisplaySettingsChange.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C011CE00 (HandleDisplayChangeForInactiveDesktops.c)
 */

void xxxBroadcastModernAppRedraw()
{
  if ( grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(grpdeskRitInput, 0, 0);
    HandleDisplayChangeForInactiveDesktops(grpdeskRitInput, 0);
  }
}
