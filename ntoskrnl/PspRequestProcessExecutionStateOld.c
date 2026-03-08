/*
 * XREFs of PspRequestProcessExecutionStateOld @ 0x14067CE2C
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1406FB110 (PspRemoveProcessFromJobChain.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1406FF27C (PspApplyJobChainLimitsToProcess.c)
 *     PsSwapProcessWorkingSet @ 0x1409AB6DC (PsSwapProcessWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRequestProcessExecutionStateOld(__int64 a1, int a2, char a3)
{
  bool v3; // zf
  int v4; // r8d
  __int64 result; // rax
  int v6; // r9d
  int v7; // r8d
  int v8; // edx

  if ( (*(_DWORD *)(a1 + 2172) & 1) == 0 || (v3 = (a3 & 1) == 0, v4 = 0x10000000, !v3) )
    v4 = 805306368;
  LODWORD(result) = *(_DWORD *)(a1 + 1120);
  v6 = v4 & (a2 << 28);
  v7 = ~v4;
  do
  {
    v8 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1120), v6 | result & v7, result);
  }
  while ( (_DWORD)result != v8 );
  return result;
}
