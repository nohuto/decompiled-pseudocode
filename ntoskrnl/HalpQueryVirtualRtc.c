/*
 * XREFs of HalpQueryVirtualRtc @ 0x1405094B0
 * Callers:
 *     HalQueryRealTimeClock @ 0x1402D0F30 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x1404FC150 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x14051A258 (HalpSetResumeTime.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     RtlpTimeToTimeFields @ 0x1402D14C8 (RtlpTimeToTimeFields.c)
 */

char __fastcall HalpQueryVirtualRtc(_QWORD *a1, bool *a2)
{
  __int64 v4; // rdi
  LARGE_INTEGER v5; // rbx
  LARGE_INTEGER v6; // r8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v8 = 0LL;
  if ( SystemPowerPhase == 2 )
    return 0;
  while ( 1 )
  {
    v4 = VrtcTime;
    v10 = qword_140C623AC;
    v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( v4 == qword_140C623B8 )
      break;
    _mm_pause();
  }
  RtlpTimeToTimeFields(&v10, &v8, v6.QuadPart);
  if ( (__int16)v8 <= 1601 )
    return 0;
  *a1 = v10 + 10000000 * (v5.QuadPart - v4) / PerformanceFrequency.QuadPart;
  if ( a2 )
    *a2 = HalpVrtcTimeStale == 0;
  return 1;
}
