/*
 * XREFs of EtwpMdlHashTableDeallocator @ 0x1405B0688
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x1405B06A4 (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpMdlHashTableDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x42777445u);
}
