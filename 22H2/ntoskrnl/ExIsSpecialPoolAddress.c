/*
 * XREFs of ExIsSpecialPoolAddress @ 0x14060F0F8
 * Callers:
 *     VfHandlePoolAlloc @ 0x140AD1FB0 (VfHandlePoolAlloc.c)
 *     DifpExAllocatePoolWithQuota_LwSP_Exit @ 0x140AE8B60 (DifpExAllocatePoolWithQuota_LwSP_Exit.c)
 *     DifpExFreePoolWithTag_LwSP_Enter @ 0x140AE8B90 (DifpExFreePoolWithTag_LwSP_Enter.c)
 *     DifpExFreePool_LwSP_Enter @ 0x140AE8BC0 (DifpExFreePool_LwSP_Enter.c)
 *     ExFreePoolSanityChecks @ 0x140AE8DFC (ExFreePoolSanityChecks.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x1402AC3C0 (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14046B17A (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  ULONG_PTR HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}
