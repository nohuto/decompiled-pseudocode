/*
 * XREFs of MmKernelVerifierEnabled @ 0x1404633F2
 * Callers:
 *     VerifierExFreePool @ 0x140ABD100 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140ABD170 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned int)MiFlags >> 1) & 1;
}
