/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1402B86BC
 * Callers:
 *     RtlExpandHashTable @ 0x1402B8330 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1402B8550 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePool2(64LL, (unsigned int)(16 << (a1 + 7)), 1650545736LL);
}
