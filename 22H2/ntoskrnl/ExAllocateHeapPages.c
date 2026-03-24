/*
 * XREFs of ExAllocateHeapPages @ 0x140375EA8
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x1402E7388 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140375AA0 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1405B369C (ExGetBigPoolInfo.c)
 *     ExInitializePoolTracker @ 0x140A68AF4 (ExInitializePoolTracker.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x140289ED0 (RtlpHpSegAlloc.c)
 *     ExGetHeapFromType @ 0x1402E869C (ExGetHeapFromType.c)
 *     RtlpHpAllocateHeap @ 0x1402FE7B0 (RtlpHpAllocateHeap.c)
 */

__int64 ExAllocateHeapPages()
{
  __int64 HeapFromType; // rax
  int v1; // r8d
  __int16 v2; // r9
  unsigned __int64 v3; // r10
  unsigned int v5; // [rsp+20h] [rbp-18h]

  HeapFromType = ExGetHeapFromType(512, 0x80000000, 0);
  if ( v3 >= *(unsigned int *)(HeapFromType + 464) )
    return RtlpHpAllocateHeap(HeapFromType, v3, v1, v2);
  else
    return RtlpHpSegAlloc(
             HeapFromType + 256 + (*(unsigned int *)(HeapFromType + 272) < v3 ? 0xC0 : 0),
             v3,
             v3,
             v3,
             v1 & v5);
}
