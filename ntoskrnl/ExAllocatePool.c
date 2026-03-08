/*
 * XREFs of ExAllocatePool @ 0x1402B6080
 * Callers:
 *     VerifierExAllocatePool @ 0x140ACD8C0 (VerifierExAllocatePool.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePool(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
