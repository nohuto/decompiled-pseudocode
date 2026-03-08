/*
 * XREFs of ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1C020FFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1C020FEB0 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 */

char __fastcall CAccessibilityTimer::KillTimer(char a1)
{
  if ( ((unsigned __int16)(1 << a1) & CAccessibilityTimer::_timersState) == 0 )
    return 0;
  CAccessibilityTimer::_timersState &= ~(1 << (a1 & 0xF));
  CAccessibilityTimer::ForwardInputToISMTimers(a1, 0, 1, 1LL);
  return 1;
}
