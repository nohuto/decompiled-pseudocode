/*
 * XREFs of PopHandleExecutionRequiredEnablementUpdate @ 0x140772624
 * Callers:
 *     PopWnfAudioCallback @ 0x140772540 (PopWnfAudioCallback.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407D3850 (PopExecutionRequiredSettingCallback.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408E1A20 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408E1CCC (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408F1378 (PopUpdatePdcSystemIdleState.c)
 * Callees:
 *     PopEnableExecutionRequiredPowerRequests @ 0x1407D4398 (PopEnableExecutionRequiredPowerRequests.c)
 */

void __fastcall PopHandleExecutionRequiredEnablementUpdate(unsigned __int64 a1)
{
  char v1; // r8

  v1 = 0;
  if ( PopExecutionRequiredTimeout )
  {
    if ( !BYTE3(PopExecutionRequiredContext)
      || PopPowerRequestActiveAudioEnablesExecutionRequired && BYTE2(PopExecutionRequiredContext)
      || BYTE1(PopExecutionRequiredContext) )
    {
      v1 = 1;
    }
    else
    {
      a1 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
      v1 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)&PopExecutionRequiredContext + 1) < a1;
    }
  }
  if ( (_BYTE)PopExecutionRequiredContext != v1 )
  {
    LOBYTE(a1) = v1;
    LOBYTE(PopExecutionRequiredContext) = v1;
    PopEnableExecutionRequiredPowerRequests(a1);
  }
}
