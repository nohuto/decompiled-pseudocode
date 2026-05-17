/*
 * XREFs of RtlpBreakPointHeap @ 0x1800FA47C
 * Callers:
 *     RtlpCreateSplitBlock @ 0x18001DD64 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001EEB4 (RtlpCoalesceFreeBlocks.c)
 *     RtlpGrowBlockInPlace @ 0x18001F630 (RtlpGrowBlockInPlace.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpValidateHeapEntry @ 0x18005F820 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18005FA90 (RtlpCheckHeapSignature.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F6918 (RtlpCheckBusyBlockTail.c)
 *     RtlDebugAllocateHeap @ 0x1800F8870 (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x1800F8D80 (RtlDebugCreateHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F927C (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9860 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x1800FA4A4 (RtlpValidateHeap.c)
 * Callees:
 *     <none>
 */

struct _PEB *RtlpBreakPointHeap()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return result;
}
