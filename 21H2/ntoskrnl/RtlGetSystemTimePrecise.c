/*
 * XREFs of RtlGetSystemTimePrecise @ 0x140278F20
 * Callers:
 *     KeSetTimer2 @ 0x14022C550 (KeSetTimer2.c)
 *     EtwpGetLoggerTimeStamp @ 0x14022CAD8 (EtwpGetLoggerTimeStamp.c)
 *     KiExecuteAllDpcs @ 0x1402472B0 (KiExecuteAllDpcs.c)
 *     KeQuerySystemTimePrecise @ 0x140278F00 (KeQuerySystemTimePrecise.c)
 *     EtwGetKernelTraceTimestamp @ 0x14029B060 (EtwGetKernelTraceTimestamp.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1402AE19C (EtwGetKernelTraceTimestampSilo.c)
 *     HalpSetVirtualRtc @ 0x1402B617C (HalpSetVirtualRtc.c)
 *     EtwpReserveTraceBuffer @ 0x1403506F0 (EtwpReserveTraceBuffer.c)
 *     WmiGetClock @ 0x1405A6760 (WmiGetClock.c)
 *     EtwpTraceSystemInitialization @ 0x140A428C8 (EtwpTraceSystemInitialization.c)
 *     PspInitPhase2 @ 0x140A4B134 (PspInitPhase2.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 */

__int64 RtlGetSystemTimePrecise()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  LARGE_INTEGER v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    v0 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v1 = MEMORY[0xFFFFF78000000014];
      v2.QuadPart = MEMORY[0xFFFFF78000000348];
      v3 = MEMORY[0xFFFFF78000000358];
      v4 = MEMORY[0xFFFFF78000000368];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v0 )
        break;
    }
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v2.QuadPart )
    return v1;
  v6 = PerformanceCounter.QuadPart - v2.QuadPart - 1;
  if ( v4 )
    v6 <<= v4;
  return (((unsigned __int64)v6 * (unsigned __int128)v3) >> 64) + v1;
}
