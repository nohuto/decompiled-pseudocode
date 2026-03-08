/*
 * XREFs of ExAllocateHeapPages @ 0x1403B489C
 * Callers:
 *     ExpInitializePoolTrackerTable @ 0x14039FCEC (ExpInitializePoolTrackerTable.c)
 *     ExpResizeBigPageTable @ 0x1403B453C (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x140604B70 (ExGetBigPoolInfo.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140605758 (ExpInsertPoolTrackerExpansion.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x1402491F0 (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeap @ 0x14024A2B0 (RtlpHpAllocateHeap.c)
 *     ExGetHeapFromType @ 0x1403B509C (ExGetHeapFromType.c)
 */

__int64 ExAllocateHeapPages()
{
  __int64 HeapFromType; // rax
  int v1; // r8d
  __int16 v2; // r9
  unsigned __int64 v3; // r10
  unsigned int v5; // [rsp+20h] [rbp-18h]

  HeapFromType = ExGetHeapFromType(512LL, 0x80000000LL, 0LL);
  if ( v3 >= *(unsigned int *)(HeapFromType + 528) )
    return RtlpHpAllocateHeap(HeapFromType, v3, v1, v2);
  else
    return RtlpHpSegAlloc(
             HeapFromType + 320 + (*(unsigned int *)(HeapFromType + 336) < v3 ? 0xC0 : 0),
             v3,
             v3,
             v3,
             v1 & v5);
}
