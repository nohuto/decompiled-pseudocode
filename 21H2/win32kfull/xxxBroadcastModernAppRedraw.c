/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C021E680
 * Callers:
 *     <none>
 * Callees:
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C002B3A0 (HandleDisplayChangeForInactiveDesktops.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00FFA40 (xxxBroadcastDisplaySettingsChange.c)
 */

__int64 xxxBroadcastModernAppRedraw()
{
  __int64 result; // rax

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(grpdeskRitInput, 0, 0);
    return HandleDisplayChangeForInactiveDesktops(grpdeskRitInput, 0);
  }
  return result;
}
