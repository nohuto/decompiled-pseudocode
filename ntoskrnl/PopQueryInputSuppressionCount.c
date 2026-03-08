/*
 * XREFs of PopQueryInputSuppressionCount @ 0x14079C78C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 *     PopCalculateCsSummary @ 0x14058EE94 (PopCalculateCsSummary.c)
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
