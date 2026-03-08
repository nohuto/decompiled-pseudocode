/*
 * XREFs of ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A0C0
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

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
