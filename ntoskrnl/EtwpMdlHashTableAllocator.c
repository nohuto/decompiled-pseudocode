/*
 * XREFs of EtwpMdlHashTableAllocator @ 0x1405FF00C
 * Callers:
 *     EtwpRegisterPartitionPages @ 0x1405FF04C (EtwpRegisterPartitionPages.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpMdlHashTableAllocator(__int64 a1)
{
  return ExAllocatePool2(64LL, a1, 1115124805LL);
}
