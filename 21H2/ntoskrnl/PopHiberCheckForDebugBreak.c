/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140A4D92C
 * Callers:
 *     PopWriteHiberImage @ 0x140A4C0E8 (PopWriteHiberImage.c)
 *     PopDecompressHiberBlocks @ 0x140A4CD9C (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140A4D310 (ConsumerPeekAndConsumeBuffer.c)
 *     PopRequestRead @ 0x140A4D4A4 (PopRequestRead.c)
 *     ProducerGetBuffer @ 0x140A4D828 (ProducerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x140A4D96C (ProducerConsumerBufferComplete.c)
 *     ConsumerGetBuffer @ 0x140A4DB8C (ConsumerGetBuffer.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140222368 (KdCheckForDebugBreak.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
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
