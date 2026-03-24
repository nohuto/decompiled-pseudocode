/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x140317AB0
 * Callers:
 *     RtlExpandHashTable @ 0x1403178F0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x140376250 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
