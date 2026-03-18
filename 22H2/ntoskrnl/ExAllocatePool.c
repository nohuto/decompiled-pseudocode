/*
 * XREFs of ExAllocatePool @ 0x14031C5C0
 * Callers:
 *     VerifierExAllocatePool @ 0x140AD18C0 (VerifierExAllocatePool.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140AAFC80 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePool(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
