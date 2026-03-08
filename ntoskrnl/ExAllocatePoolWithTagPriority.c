/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x1402E1F00
 * Callers:
 *     VerifierExAllocatePoolWithTagPriority @ 0x140ACDE80 (VerifierExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x140ADA490 (VerifierPortExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpAllocatePoolWithTagPriority @ 0x140AAB2A4 (ExpAllocatePoolWithTagPriority.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  return (PVOID)ExpAllocatePoolWithTagPriority(
                  PoolType,
                  NumberOfBytes,
                  Tag,
                  Priority,
                  KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
}
