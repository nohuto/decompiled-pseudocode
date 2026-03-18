/*
 * XREFs of ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1C01E0904
 * Callers:
 *     ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1C01E0A00 (-KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x1C01E0A50 (-SetTimer@CAccessibilityTimer@@SA-AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 CAccessibilityTimer::ForwardInputToISMTimers()
{
  return InputExtensibilityCallout::CoreMsgSendMessage(1LL, 18);
}
