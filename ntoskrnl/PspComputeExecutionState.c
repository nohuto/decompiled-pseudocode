/*
 * XREFs of PspComputeExecutionState @ 0x1406FF3AC
 * Callers:
 *     PspSetJobFreezeCountCallback @ 0x140300810 (PspSetJobFreezeCountCallback.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1406FF27C (PspApplyJobChainLimitsToProcess.c)
 *     PsSwapProcessWorkingSet @ 0x1409AB6DC (PsSwapProcessWorkingSet.c)
 * Callees:
 *     PspInitializeProcessExecutionState @ 0x14040BAC8 (PspInitializeProcessExecutionState.c)
 */

char PspComputeExecutionState()
{
  _DWORD *v0; // rdx
  unsigned int v1; // r8d
  char result; // al
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  PspInitializeProcessExecutionState(&v3);
  result = v3;
  if ( v0[265] > v1 )
    result = v3 | 2;
  if ( v0[262] > v1 )
    result |= 1u;
  if ( v0[263] > v1 )
    return result | 4;
  return result;
}
