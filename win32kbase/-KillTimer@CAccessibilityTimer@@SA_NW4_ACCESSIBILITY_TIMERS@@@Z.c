char __fastcall CAccessibilityTimer::KillTimer(char a1)
{
  if ( ((unsigned __int16)(1 << a1) & CAccessibilityTimer::_timersState) == 0 )
    return 0;
  CAccessibilityTimer::_timersState &= ~(1 << (a1 & 0xF));
  CAccessibilityTimer::ForwardInputToISMTimers(a1, 0, 1, 1LL);
  return 1;
}
