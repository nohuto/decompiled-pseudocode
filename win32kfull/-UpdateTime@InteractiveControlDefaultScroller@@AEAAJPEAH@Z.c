__int64 __fastcall InteractiveControlDefaultScroller::UpdateTime(LARGE_INTEGER *this, int *a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v5; // rbx
  unsigned __int64 QuadPart; // rsi
  __int64 v7; // rcx
  BOOL v8; // edx
  __int64 result; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = this[1];
  QuadPart = this->QuadPart;
  this[1] = PerformanceCounter;
  v8 = 1000 * (PerformanceCounter.QuadPart - v5.QuadPart) / QuadPart > *((int *)InteractiveControlManager::Instance(v7)
                                                                       + 49);
  result = 0LL;
  *a2 = v8;
  return result;
}
