/*
 * XREFs of ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x1C01A86A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1C01A8530 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     ?GetTimerId@CAccessibilityTimer@@CA?AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z @ 0x1C01A8578 (-GetTimerId@CAccessibilityTimer@@CA-AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z.c)
 */

__int64 __fastcall CAccessibilityTimer::SetTimer(__int64 a1, void (__fastcall *a2)(struct tagWND *a1))
{
  unsigned int TimerId; // ebx

  TimerId = CAccessibilityTimer::GetTimerId(a2);
  CAccessibilityTimer::_timersState |= 1 << (TimerId & 0xF);
  CAccessibilityTimer::ForwardInputToISMTimers();
  return TimerId;
}
