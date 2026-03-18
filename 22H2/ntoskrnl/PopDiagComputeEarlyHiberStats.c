/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140AA795C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmConvertTime @ 0x1402553F0 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x140257210 (KeGetPrcb.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 Prcb; // rax
  __int64 *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  qword_140C3D4A8 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39450;
  Prcb = KeGetPrcb(0);
  v1 = &qword_14000A558;
  v2 = 59LL;
  qword_140C3D470 = 1000LL * *(unsigned int *)(Prcb + 68);
  do
  {
    if ( (v1[1] & 0x20000000) != 0 )
    {
      v4 = *(__int64 *)((char *)&qword_140C3D398 + *v1);
      if ( v4 > (unsigned __int64)PopSstDiagResumeClock )
        v4 -= *((_QWORD *)&PopSstDiagResumeClock + 1);
      v3 = *v1;
      *(__int64 *)((char *)&qword_140C3D398 + v3) = PpmConvertTime(
                                                      v4,
                                                      1000000LL * KeGetCurrentPrcb()->MHz,
                                                      PopQpcFrequency);
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  result = qword_140C3D468 - qword_140C3D400;
  qword_140C3D3F8 = qword_140C3D468 - qword_140C3D400;
  return result;
}
