/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x14021FC98
 * Callers:
 *     RtlExpandHashTable @ 0x140206C60 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x14021FB10 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
