/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x140205FA4
 * Callers:
 *     EtwpSwitchBuffer @ 0x140205FF4 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x14069310C (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1408A3088 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     EtwpGetLoggerTimeStamp @ 0x140205F68 (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402063C4 (EtwpEnqueueAvailableBuffer.c)
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     EtwpCompressionDpc @ 0x140600220 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x1406005D4 (EtwpReenableCompression.c)
 */

LARGE_INTEGER __fastcall EtwpPrepareDirtyBuffer(__int64 a1, LARGE_INTEGER *a2)
{
  int v2; // eax
  LARGE_INTEGER result; // rax

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, a2, 4LL);
      if ( !*(_DWORD *)(a1 + 1168) && *(_QWORD *)(a1 + 1264) >= 2LL * *(_QWORD *)(a1 + 1272) )
        EtwpReenableCompression(a1);
      result.QuadPart = *(unsigned int *)(a1 + 1168);
      if ( result.LowPart )
      {
        result.QuadPart = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 1136), 2);
        if ( !result.LowPart )
        {
          if ( ObGetCurrentIrql() > 2u )
            return (LARGE_INTEGER)KiInsertQueueDpc(a1 + 1192, 0);
          else
            return (LARGE_INTEGER)EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
        }
      }
    }
    else
    {
      return (LARGE_INTEGER)EtwpEnqueueAvailableBuffer(a1, a2, 0LL);
    }
  }
  else
  {
    a2[5].HighPart = 3;
    result = EtwpGetLoggerTimeStamp(a1);
    a2[2] = result;
  }
  return result;
}
