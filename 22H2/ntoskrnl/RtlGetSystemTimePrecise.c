/*
 * XREFs of RtlGetSystemTimePrecise @ 0x140341F30
 * Callers:
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     EtwpGetLoggerTimeStamp @ 0x14022C448 (EtwpGetLoggerTimeStamp.c)
 *     KiExecuteAllDpcs @ 0x140246C20 (KiExecuteAllDpcs.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0E80 (EtwpReserveTraceBuffer.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1403058EC (EtwGetKernelTraceTimestampSilo.c)
 *     HalpSetVirtualRtc @ 0x14030D8CC (HalpSetVirtualRtc.c)
 *     KeQuerySystemTimePrecise @ 0x140341F10 (KeQuerySystemTimePrecise.c)
 *     WmiGetClock @ 0x1405A66A0 (WmiGetClock.c)
 *     EtwpTraceSystemInitialization @ 0x140A41CF8 (EtwpTraceSystemInitialization.c)
 *     PspInitPhase2 @ 0x140A4B134 (PspInitPhase2.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER RtlGetSystemTimePrecise(void)
{
  __int64 v0; // rbx
  LARGE_INTEGER v1; // rbp
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx
  LARGE_INTEGER result; // rax

  while ( 1 )
  {
    v0 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v1.QuadPart = MEMORY[0xFFFFF78000000014];
      v2 = MEMORY[0xFFFFF78000000348];
      v3 = MEMORY[0xFFFFF78000000358];
      v4 = MEMORY[0xFFFFF78000000368];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v0 )
        break;
    }
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= v2 )
  {
    return v1;
  }
  else
  {
    v6 = PerformanceCounter.QuadPart - v2 - 1;
    if ( v4 )
      v6 <<= v4;
    result.QuadPart = (((unsigned __int64)v6 * (unsigned __int128)v3) >> 64) + v1.QuadPart;
  }
  return result;
}
