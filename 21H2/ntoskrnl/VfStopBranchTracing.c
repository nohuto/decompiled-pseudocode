/*
 * XREFs of VfStopBranchTracing @ 0x1409D95B8
 * Callers:
 *     KiFreezeTargetExecution @ 0x14051E0A0 (KiFreezeTargetExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C7050 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     <none>
 */

__int64 VfStopBranchTracing()
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x8000000) == 0 || !VfBTSSupported )
    return 3221225474LL;
  if ( !VfBTSInitialized || !VfBTSStarted[KeGetCurrentPrcb()->Number] )
    return 3221226538LL;
  __writemsr(0x1D9u, 0LL);
  result = 0LL;
  VfBTSStarted[KeGetCurrentPrcb()->Number] = 0;
  return result;
}
