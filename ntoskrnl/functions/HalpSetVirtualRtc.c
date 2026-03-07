char __fastcall HalpSetVirtualRtc(__int64 *a1)
{
  __int64 SystemTimePrecise; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( SystemPowerPhase == 2 )
    return 0;
  if ( a1 )
  {
    SystemTimePrecise = *a1;
    v6 = *a1;
  }
  else
  {
    if ( SystemPowerPhase )
      return 0;
    SystemTimePrecise = RtlGetSystemTimePrecise();
    v6 = SystemTimePrecise;
  }
  RtlpTimeToTimeFields(&v6, &v5);
  if ( (__int16)v5 <= 1601 )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  dword_140C623C0 = PerformanceCounter.HighPart;
  qword_140C623B8 = PerformanceCounter.QuadPart;
  dword_140C623B4 = HIDWORD(v6);
  qword_140C623AC = SystemTimePrecise;
  dword_140C623A8 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
