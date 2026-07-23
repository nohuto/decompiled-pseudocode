/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x14099581C
 * Callers:
 *     PopWriteHiberImage @ 0x140994C74 (PopWriteHiberImage.c)
 *     ConsumerGetBuffer @ 0x14099514C (ConsumerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1409956AC (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140995778 (ProducerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140995874 (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1409959AC (ConsumerPeekAndConsumeBuffer.c)
 *     PopRequestRead @ 0x1409B2784 (PopRequestRead.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x140384004 (KdCheckForDebugBreak.c)
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
