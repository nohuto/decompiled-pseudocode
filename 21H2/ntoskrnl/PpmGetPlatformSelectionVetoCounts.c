/*
 * XREFs of PpmGetPlatformSelectionVetoCounts @ 0x140565FB0
 * Callers:
 *     PopCalculateCsSummary @ 0x1405700E0 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmGetPlatformSelectionVetoCounts(unsigned int a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  *a2 = 0LL;
  *a3 = 0LL;
  result = a1;
  if ( PpmPlatformStates )
  {
    if ( a1 < *(_DWORD *)PpmPlatformStates )
    {
      v4 = *(_QWORD *)(PpmPlatformStates + 48);
      *a2 = *(_QWORD *)(1008 * result + v4 + 88);
      result = *(_QWORD *)(1008 * result + v4 + 80);
      *a3 = result;
    }
  }
  return result;
}
