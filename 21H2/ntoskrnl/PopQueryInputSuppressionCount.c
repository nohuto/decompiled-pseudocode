/*
 * XREFs of PopQueryInputSuppressionCount @ 0x1408EED9C
 * Callers:
 *     PopCalculateCsSummary @ 0x14056FEA0 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x140570558 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopQueryInputSuppressionCount(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&PopInputSuppressionActionCount, 0);
  *a1 = result;
  return result;
}
