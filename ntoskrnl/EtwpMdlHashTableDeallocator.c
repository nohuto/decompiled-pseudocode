/*
 * XREFs of EtwpMdlHashTableDeallocator @ 0x1405FF030
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x1405FF04C (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpMdlHashTableDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x42777445u);
}
