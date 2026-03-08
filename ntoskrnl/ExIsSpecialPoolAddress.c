/*
 * XREFs of ExIsSpecialPoolAddress @ 0x14060CCD8
 * Callers:
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 *     DifpExAllocatePoolWithQuota_LwSP_Exit @ 0x140AE4B60 (DifpExAllocatePoolWithQuota_LwSP_Exit.c)
 *     DifpExFreePoolWithTag_LwSP_Enter @ 0x140AE4B90 (DifpExFreePoolWithTag_LwSP_Enter.c)
 *     DifpExFreePool_LwSP_Enter @ 0x140AE4BC0 (DifpExFreePool_LwSP_Enter.c)
 *     ExFreePoolSanityChecks @ 0x140AE4DFC (ExFreePoolSanityChecks.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x140313BF0 (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14046327A (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  ULONG_PTR HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}
