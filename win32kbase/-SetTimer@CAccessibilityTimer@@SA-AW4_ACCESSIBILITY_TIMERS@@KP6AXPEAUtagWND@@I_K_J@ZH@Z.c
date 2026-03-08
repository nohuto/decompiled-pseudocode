/*
 * XREFs of ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x1C0210020
 * Callers:
 *     <none>
 * Callees:
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1C020FEB0 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     ?GetTimerId@CAccessibilityTimer@@CA?AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z @ 0x1C020FEF8 (-GetTimerId@CAccessibilityTimer@@CA-AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z.c)
 */

__int64 __fastcall CAccessibilityTimer::SetTimer(int a1, void (__fastcall *a2)(struct tagWND *a1), int a3)
{
  unsigned int TimerId; // ebx

  TimerId = CAccessibilityTimer::GetTimerId(a2);
  CAccessibilityTimer::_timersState |= 1 << (TimerId & 0xF);
  CAccessibilityTimer::ForwardInputToISMTimers(TimerId, a1, a3, 0LL);
  return TimerId;
}
