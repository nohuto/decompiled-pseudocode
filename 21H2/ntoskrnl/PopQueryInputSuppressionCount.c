/*
 * XREFs of PopQueryInputSuppressionCount @ 0x1406EBB94
 * Callers:
 *     PopCalculateCsSummary @ 0x140397424 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
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
