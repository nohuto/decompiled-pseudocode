/*
 * XREFs of PpmGetPerfPolicyClass @ 0x140235B9C
 * Callers:
 *     PpmPerfSelectProcessorState @ 0x140235830 (PpmPerfSelectProcessorState.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x1402D2278 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfApplyDomainState @ 0x1402E56F8 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyLatencyHint @ 0x1402EDE2C (PpmPerfApplyLatencyHint.c)
 *     PpmPerfResizeHistory @ 0x140983A10 (PpmPerfResizeHistory.c)
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
      if ( !a1[68] )
        return result;
      if ( KeHeteroSystem )
        result = a1[88];
      else
        result = a1[91];
    }
    if ( result )
      return 1;
  }
  return result;
}
