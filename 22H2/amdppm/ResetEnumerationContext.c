/*
 * XREFs of ResetEnumerationContext @ 0x1C0001BD4
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000A628 (InitLegacyPccInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C001D5F0 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C0021B34 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C0022FA0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C0023700 (RegisterHvPerfStates.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002C1F0 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002E704 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002EAC0 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C00308F0 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0034448 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0034728 (RetrieveEfficiencyClassInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetEnumerationContext(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[2] )
  {
    *((_BYTE *)a1 + 24) = 0;
  }
  else
  {
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
