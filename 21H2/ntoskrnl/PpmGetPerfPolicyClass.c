/*
 * XREFs of PpmGetPerfPolicyClass @ 0x1402A0C5C
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1402A05F0 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyLatencyHint @ 0x14037C594 (PpmPerfApplyLatencyHint.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x1403A2DEC (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfResizeHistory @ 0x1408E62C8 (PpmPerfResizeHistory.c)
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
