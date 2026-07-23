/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x140250FEC
 * Callers:
 *     RtlExpandHashTable @ 0x1402F6CD0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x140376330 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 << (a1 + 7)), 0x62615448u);
}
