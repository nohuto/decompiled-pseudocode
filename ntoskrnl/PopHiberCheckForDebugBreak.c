/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140A9FCE4
 * Callers:
 *     ConsumerGetBuffer @ 0x140A9E584 (ConsumerGetBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140A9E684 (ConsumerPeekAndConsumeBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140A9F1C4 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140AA0A10 (PopRequestRead.c)
 *     PopWriteHiberImage @ 0x140AA272C (PopWriteHiberImage.c)
 *     ProducerConsumerBufferComplete @ 0x140AA2D38 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140AA2F1C (ProducerGetBuffer.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x1402C7D64 (KdCheckForDebugBreak.c)
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
