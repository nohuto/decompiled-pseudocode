/*
 * XREFs of RtlGetSystemTimePrecise @ 0x140205310
 * Callers:
 *     EtwpGetLoggerTimeStamp @ 0x140205F68 (EtwpGetLoggerTimeStamp.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x140250570 (EtwGetKernelTraceTimestampSilo.c)
 *     KiProcessExpiredTimerList @ 0x140251760 (KiProcessExpiredTimerList.c)
 *     HalpSetVirtualRtc @ 0x1402D13F0 (HalpSetVirtualRtc.c)
 *     EtwpReserveTraceBuffer @ 0x1403151E0 (EtwpReserveTraceBuffer.c)
 *     EtwpLogContextSwapEvent @ 0x140384C90 (EtwpLogContextSwapEvent.c)
 *     WmiGetClock @ 0x1405FD310 (WmiGetClock.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408717B8 (SshpSessionManagerSendControlEvent.c)
 *     EtwpTraceSystemInitialization @ 0x140B41904 (EtwpTraceSystemInitialization.c)
 *     PspInitPhase2 @ 0x140B64880 (PspInitPhase2.c)
 *     EtwpInitializeBootTimeStamps @ 0x140B70ED8 (EtwpInitializeBootTimeStamps.c)
 *     EtwpFixBootSystemTime @ 0x140B942D0 (EtwpFixBootSystemTime.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
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
