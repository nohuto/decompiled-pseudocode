/*
 * XREFs of PopSetExecutionRequiredTimer @ 0x1407D38EC
 * Callers:
 *     PopExecutionRequiredSettingCallback @ 0x1407D3850 (PopExecutionRequiredSettingCallback.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408F1378 (PopUpdatePdcSystemIdleState.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 */

__int64 PopSetExecutionRequiredTimer()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax

  if ( BYTE3(PopExecutionRequiredContext) && PopExecutionRequiredTimeout )
  {
    v0 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
    if ( MEMORY[0xFFFFF78000000008] - *((_QWORD *)&PopExecutionRequiredContext + 1) < v0 )
      v1 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)&PopExecutionRequiredContext + 1) - v0;
    else
      v1 = -10000000LL;
    return KiSetTimerEx((__int64)&PopExecutionRequiredTimer, v1, 0, 0, (__int64)&PopExecutionRequiredTimeoutDpc);
  }
  return result;
}
