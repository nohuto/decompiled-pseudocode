__int64 __fastcall CAccessibilityTimer::SetTimer(int a1, void (__fastcall *a2)(struct tagWND *a1), int a3)
{
  unsigned int TimerId; // ebx

  TimerId = CAccessibilityTimer::GetTimerId(a2);
  CAccessibilityTimer::_timersState |= 1 << (TimerId & 0xF);
  CAccessibilityTimer::ForwardInputToISMTimers(TimerId, a1, a3, 0LL);
  return TimerId;
}
