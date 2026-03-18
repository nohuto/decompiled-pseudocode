/*
 * XREFs of MmKernelVerifierEnabled @ 0x14046B2F2
 * Callers:
 *     VerifierExFreePool @ 0x140AC1100 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140AC1170 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned int)MiFlags >> 1) & 1;
}
