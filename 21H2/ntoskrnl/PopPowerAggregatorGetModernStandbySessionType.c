/*
 * XREFs of PopPowerAggregatorGetModernStandbySessionType @ 0x1408EE3B8
 * Callers:
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x1408EE4C0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopPowerAggregatorHandleModernStandbyResumeIntent @ 0x1408EE580 (PopPowerAggregatorHandleModernStandbyResumeIntent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorGetModernStandbySessionType(_DWORD *a1, char a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  __int64 result; // rax

  v2 = a1[2];
  v3 = 0;
  if ( (v2 & 8) != 0 )
  {
    v3 = 2;
    if ( (v2 & 1) == 0 && *a1 == 1 )
      v3 = 4;
  }
  result = v3 + 1;
  if ( !a2 )
    return v3;
  return result;
}
