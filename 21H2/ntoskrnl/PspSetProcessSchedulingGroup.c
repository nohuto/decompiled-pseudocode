/*
 * XREFs of PspSetProcessSchedulingGroup @ 0x14060A5F0
 * Callers:
 *     PspSetCpuRateControlJobPostCallback @ 0x14060A300 (PspSetCpuRateControlJobPostCallback.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1406F487C (PspApplyJobChainLimitsToProcess.c)
 * Callees:
 *     KeSetProcessSchedulingGroup @ 0x14029BE9C (KeSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 1124) & 8;
  if ( !v4 || !a2 )
    KeSetProcessSchedulingGroup(a1, a2);
  result = *(_DWORD *)(a1 + 1124) & 8;
  if ( v4 != (_DWORD)result )
  {
    if ( a2 )
      return KeSetProcessSchedulingGroup(a1, 0LL);
  }
  return result;
}
