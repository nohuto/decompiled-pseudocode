/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x14032F3E4
 * Callers:
 *     EtwpSwitchBuffer @ 0x14032EE9C (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x1406BC9F0 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x14093D1D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD00 (KeInsertQueueDpc.c)
 *     EtwpGetLoggerTimeStamp @ 0x14022C448 (EtwpGetLoggerTimeStamp.c)
 *     ObGetCurrentIrql @ 0x14025EDF0 (ObGetCurrentIrql.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14032F238 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpCompressionDpc @ 0x1405ACC90 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x1405AD600 (EtwpReenableCompression.c)
 */

char __fastcall EtwpPrepareDirtyBuffer(__int64 a1, LARGE_INTEGER *a2)
{
  int v2; // eax
  LARGE_INTEGER LoggerTimeStamp; // rax

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 4u);
      if ( !*(_DWORD *)(a1 + 1152) && *(_QWORD *)(a1 + 1248) >= 2LL * *(_QWORD *)(a1 + 1256) )
        EtwpReenableCompression(a1);
      LoggerTimeStamp.LowPart = *(_DWORD *)(a1 + 1152);
      if ( LoggerTimeStamp.LowPart )
      {
        LoggerTimeStamp.LowPart = _InterlockedExchange((volatile __int32 *)(a1 + 1120), 2);
        if ( !LoggerTimeStamp.LowPart )
        {
          if ( ObGetCurrentIrql() > 2u )
            LOBYTE(LoggerTimeStamp.LowPart) = KeInsertQueueDpc((PRKDPC)(a1 + 1176), 0LL, 0LL);
          else
            LOBYTE(LoggerTimeStamp.LowPart) = EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
        }
      }
    }
    else
    {
      LOBYTE(LoggerTimeStamp.LowPart) = EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
    }
  }
  else
  {
    a2[5].HighPart = 3;
    LoggerTimeStamp = EtwpGetLoggerTimeStamp(a1);
    a2[2] = LoggerTimeStamp;
  }
  return LoggerTimeStamp.LowPart;
}
