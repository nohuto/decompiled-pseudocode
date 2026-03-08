/*
 * XREFs of VfStartBranchTracing @ 0x140AD09E0
 * Callers:
 *     KiFreezeTargetExecution @ 0x140369240 (KiFreezeTargetExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x140ABF120 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     <none>
 */

__int64 VfStartBranchTracing()
{
  unsigned int v0; // eax
  __int64 result; // rax

  if ( (MmVerifierData & 0x8000000) == 0 || !VfBTSSupported )
    return 3221225474LL;
  if ( VfBTSInitialized && !VfBTSStarted[KeGetCurrentPrcb()->Number] )
  {
    if ( VfBTSProcessorFamily == 15 )
    {
      v0 = 12;
    }
    else
    {
      if ( VfBTSProcessorFamily != 6 )
      {
LABEL_10:
        result = 0LL;
        VfBTSStarted[KeGetCurrentPrcb()->Number] = 1;
        return result;
      }
      v0 = 192;
    }
    __writemsr(0x1D9u, v0);
    goto LABEL_10;
  }
  return 3221226538LL;
}
