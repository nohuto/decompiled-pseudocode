/*
 * XREFs of EtwpMdlHashTableDeallocator @ 0x140601494
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x1406014B0 (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpMdlHashTableDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x42777445u);
}
