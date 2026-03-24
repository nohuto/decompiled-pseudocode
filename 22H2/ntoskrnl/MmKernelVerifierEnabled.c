/*
 * XREFs of MmKernelVerifierEnabled @ 0x1405303F8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D45E0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExFreePool @ 0x1409D51A0 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409D5230 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned __int8)MiFlags >> 1) & 1;
}
