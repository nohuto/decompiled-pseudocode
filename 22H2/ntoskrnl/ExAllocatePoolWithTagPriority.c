/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x14034E400
 * Callers:
 *     VerifierExAllocatePoolWithTagPriority @ 0x140AD1E80 (VerifierExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140AD1FB0 (VfHandlePoolAlloc.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x140ADE490 (VerifierPortExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpAllocatePoolWithTagPriority @ 0x140AAFCF4 (ExpAllocatePoolWithTagPriority.c)
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
