/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140AA472C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 Prcb; // rax
  __int64 *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  qword_140C3D0E8 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39050;
  Prcb = KeGetPrcb(0);
  v1 = &qword_14000A5A8;
  v2 = 59LL;
  qword_140C3D0B0 = 1000LL * *(unsigned int *)(Prcb + 68);
  do
  {
    if ( (v1[1] & 0x20000000) != 0 )
    {
      v4 = *(__int64 *)((char *)&qword_140C3CFD8 + *v1);
      if ( v4 > (unsigned __int64)PopSstDiagResumeClock )
        v4 -= *((_QWORD *)&PopSstDiagResumeClock + 1);
      v3 = *v1;
      *(__int64 *)((char *)&qword_140C3CFD8 + v3) = PpmConvertTime(
                                                      v4,
                                                      1000000LL * KeGetCurrentPrcb()->MHz,
                                                      PopQpcFrequency);
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  result = qword_140C3D0A8 - qword_140C3D040;
  qword_140C3D038 = qword_140C3D0A8 - qword_140C3D040;
  return result;
}
