/*
 * XREFs of PpmGetPerfPolicyClass @ 0x14021E1DC
 * Callers:
 *     PpmPerfApplyDomainState @ 0x14021DB70 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyLatencyHint @ 0x14037C0E4 (PpmPerfApplyLatencyHint.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x1403A2F3C (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfResizeHistory @ 0x1408E6428 (PpmPerfResizeHistory.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmGetPerfPolicyClass(_BYTE *a1)
{
  char result; // al

  result = 0;
  if ( a1 )
  {
    if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses > 1u )
    {
      if ( *(_QWORD *)a1 )
        result = *(_BYTE *)(*(_QWORD *)a1 + 205LL);
    }
    else
    {
      if ( !a1[60] )
        return result;
      result = a1[80];
    }
    if ( result )
      return 1;
  }
  return result;
}
