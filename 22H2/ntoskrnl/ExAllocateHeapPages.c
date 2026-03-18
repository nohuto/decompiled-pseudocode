/*
 * XREFs of ExAllocateHeapPages @ 0x1403B955C
 * Callers:
 *     ExpInitializePoolTrackerTable @ 0x140398524 (ExpInitializePoolTrackerTable.c)
 *     ExpResizeBigPageTable @ 0x1403B91FC (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x140606FC0 (ExGetBigPoolInfo.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140607BA8 (ExpInsertPoolTrackerExpansion.c)
 * Callees:
 *     RtlpHpAllocateHeap @ 0x14024D400 (RtlpHpAllocateHeap.c)
 *     RtlpHpSegAlloc @ 0x14024DB20 (RtlpHpSegAlloc.c)
 *     ExGetHeapFromType @ 0x1403B9D5C (ExGetHeapFromType.c)
 */

char *ExAllocateHeapPages()
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
    return (char *)RtlpHpSegAlloc(
                     HeapFromType + 320 + (*(unsigned int *)(HeapFromType + 336) < v3 ? 0xC0 : 0),
                     v3,
                     v3,
                     v3,
                     v1 & v5);
}
