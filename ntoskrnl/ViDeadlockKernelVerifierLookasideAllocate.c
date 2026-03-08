/*
 * XREFs of ViDeadlockKernelVerifierLookasideAllocate @ 0x140AD6590
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ViDeadlockKernelVerifierLookasideAllocate(POOL_TYPE a1, SIZE_T a2, ULONG a3)
{
  if ( (ViDeadlockState & 2) != 0 )
    return 0LL;
  else
    return ExAllocatePoolWithTag(a1, a2, a3);
}
