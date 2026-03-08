/*
 * XREFs of PspInitializeProcessExecutionState @ 0x14040BAC8
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1406FB110 (PspRemoveProcessFromJobChain.c)
 *     PspComputeExecutionState @ 0x1406FF3AC (PspComputeExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspInitializeProcessExecutionState(_BYTE *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0;
  return result;
}
