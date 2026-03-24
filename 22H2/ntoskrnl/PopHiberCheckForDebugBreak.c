/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140994FFC
 * Callers:
 *     PopWriteHiberImage @ 0x140994454 (PopWriteHiberImage.c)
 *     ConsumerGetBuffer @ 0x14099492C (ConsumerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x140994E8C (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140994F58 (ProducerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140995054 (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x14099518C (ConsumerPeekAndConsumeBuffer.c)
 *     PopRequestRead @ 0x1409B1994 (PopRequestRead.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x140383F80 (KdCheckForDebugBreak.c)
 */

LARGE_INTEGER PopHiberCheckForDebugBreak()
{
  LARGE_INTEGER result; // rax

  result.QuadPart = (LONGLONG)KeGetCurrentPrcb();
  if ( !*(_DWORD *)(result.QuadPart + 36) )
  {
    result.QuadPart = (unsigned int)(PopDebugCount + 1);
    PopDebugCount = result.LowPart;
    if ( (result.LowPart & 0x3F) == 0 )
    {
      KdCheckForDebugBreak();
      return KeQueryPerformanceCounter(0LL);
    }
  }
  return result;
}
