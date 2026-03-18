/*
 * XREFs of PpmGetPerfPolicyClass @ 0x140225C88
 * Callers:
 *     PpmPerfCalculateQosClassPolicies @ 0x140224F04 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfApplyLatencyHint @ 0x1402254C0 (PpmPerfApplyLatencyHint.c)
 *     PpmPerfApplyDomainState @ 0x14022560C (PpmPerfApplyDomainState.c)
 *     PpmPerfResizeHistory @ 0x14098EBBC (PpmPerfResizeHistory.c)
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
        result = *(_BYTE *)(*(_QWORD *)a1 + 301LL);
    }
    else
    {
      if ( !a1[64] )
        return result;
      result = a1[88];
    }
    if ( result )
      return 1;
  }
  return result;
}
