LARGE_INTEGER *__fastcall DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(
        LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCounter; // rax

  this[4].LowPart = 0;
  this[6].QuadPart = 0LL;
  this->QuadPart = (LONGLONG)&DirectComposition::CNaturalAnimationMarshaler::`vftable';
  this[3].QuadPart = 1LL;
  this[4].HighPart = 112;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  this[23].LowPart = 0;
  this[23].HighPart = 0;
  this[24].LowPart = 0;
  this[22] = PerformanceCounter;
  return this;
}
