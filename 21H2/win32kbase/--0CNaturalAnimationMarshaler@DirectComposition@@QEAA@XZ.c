/*
 * XREFs of ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0213D2C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER *__fastcall DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(
        LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCounter; // rax

  this[4].LowPart = 0;
  this[7].QuadPart = 0LL;
  this->QuadPart = (LONGLONG)&DirectComposition::CNaturalAnimationMarshaler::`vftable';
  this[3].QuadPart = 1LL;
  this[6].LowPart = 109;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  this[25].LowPart = 0;
  this[25].HighPart = 0;
  this[26].LowPart = 0;
  this[23] = PerformanceCounter;
  return this;
}
