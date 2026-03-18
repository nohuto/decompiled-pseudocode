/*
 * XREFs of ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x1C01E0A50
 * Callers:
 *     <none>
 * Callees:
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1C01E0904 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     ?GetTimerId@CAccessibilityTimer@@CA?AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z @ 0x1C01E094C (-GetTimerId@CAccessibilityTimer@@CA-AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z.c)
 */

__int64 __fastcall CAccessibilityTimer::SetTimer(__int64 a1, void (__fastcall *a2)(struct tagWND *a1), __int64 a3)
{
  unsigned int TimerId; // ebx

  TimerId = CAccessibilityTimer::GetTimerId(a2, (__int64)a2, a3);
  CAccessibilityTimer::_timersState |= 1 << (TimerId & 0xF);
  CAccessibilityTimer::ForwardInputToISMTimers();
  return TimerId;
}
