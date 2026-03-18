/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140AA2F14
 * Callers:
 *     ConsumerGetBuffer @ 0x140AA1734 (ConsumerGetBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140AA1834 (ConsumerPeekAndConsumeBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140AA23F4 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140AA3C40 (PopRequestRead.c)
 *     PopWriteHiberImage @ 0x140AA595C (PopWriteHiberImage.c)
 *     ProducerConsumerBufferComplete @ 0x140AA5F68 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140AA614C (ProducerGetBuffer.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x140331CD4 (KdCheckForDebugBreak.c)
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
