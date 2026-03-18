/*
 * XREFs of RtlGetSystemTimePrecise @ 0x14022DB00
 * Callers:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     HalpSetVirtualRtc @ 0x14022DA40 (HalpSetVirtualRtc.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14027B3C0 (EtwGetKernelTraceTimestampSilo.c)
 *     KiProcessExpiredTimerList @ 0x1402A7C20 (KiProcessExpiredTimerList.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     EtwpReserveTraceBuffer @ 0x1402ABBF0 (EtwpReserveTraceBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402E1D0C (EtwpGetLoggerTimeStamp.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     WmiGetClock @ 0x140630E90 (WmiGetClock.c)
 *     SshpSessionManagerSendControlEvent @ 0x140811238 (SshpSessionManagerSendControlEvent.c)
 *     EtwpTraceSystemInitialization @ 0x140AFAD4C (EtwpTraceSystemInitialization.c)
 *     PspInitPhase2 @ 0x140B24C44 (PspInitPhase2.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
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
