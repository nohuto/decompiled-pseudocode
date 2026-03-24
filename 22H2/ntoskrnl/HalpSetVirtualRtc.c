/*
 * XREFs of HalpSetVirtualRtc @ 0x14030D8CC
 * Callers:
 *     HalQueryRealTimeClock @ 0x14030CCC0 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x140384030 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x140386040 (HalpSetResumeTime.c)
 *     HalSetRealTimeClock @ 0x1404B6A90 (HalSetRealTimeClock.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     RtlpTimeToTimeFields @ 0x14030D368 (RtlpTimeToTimeFields.c)
 *     RtlGetSystemTimePrecise @ 0x140341F30 (RtlGetSystemTimePrecise.c)
 */

char __fastcall HalpSetVirtualRtc(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 SystemTimePrecise; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( SystemPowerPhase == 2 )
    return 0;
  if ( a1 )
  {
    SystemTimePrecise = *a1;
    v9 = *a1;
  }
  else
  {
    if ( SystemPowerPhase )
      return 0;
    SystemTimePrecise = RtlGetSystemTimePrecise(0LL, a2, a3, a4);
    v9 = SystemTimePrecise;
  }
  RtlpTimeToTimeFields(&v9, &v8, a3);
  if ( (__int16)v8 <= 1601 )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  dword_140C4A640 = PerformanceCounter.HighPart;
  qword_140C4A638 = PerformanceCounter.QuadPart;
  dword_140C4A634 = HIDWORD(v9);
  qword_140C4A62C = SystemTimePrecise;
  dword_140C4A628 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
