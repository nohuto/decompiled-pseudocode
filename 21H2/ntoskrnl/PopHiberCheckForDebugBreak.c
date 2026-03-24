/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x14099481C
 * Callers:
 *     PopWriteHiberImage @ 0x140993C74 (PopWriteHiberImage.c)
 *     ConsumerGetBuffer @ 0x14099414C (ConsumerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1409946AC (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140994778 (ProducerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140994874 (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1409949AC (ConsumerPeekAndConsumeBuffer.c)
 *     PopRequestRead @ 0x1409B1854 (PopRequestRead.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x140383EB0 (KdCheckForDebugBreak.c)
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
