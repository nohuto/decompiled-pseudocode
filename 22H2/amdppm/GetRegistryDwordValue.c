/*
 * XREFs of GetRegistryDwordValue @ 0x1C001FFC0
 * Callers:
 *     ProcLibTraceSummary2 @ 0x1C001F1CC (ProcLibTraceSummary2.c)
 *     GetRegistryQwordValue @ 0x1C0020064 (GetRegistryQwordValue.c)
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002E704 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002EAC0 (InitPerfStatesInternal.c)
 *     ProcLibGlobalInit @ 0x1C003778C (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1C001FFE4 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
