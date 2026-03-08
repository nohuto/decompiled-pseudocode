/*
 * XREFs of PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408525A4
 * Callers:
 *     PopUpdatePdcSystemIdleState @ 0x14073B8FC (PopUpdatePdcSystemIdleState.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408523C0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopWnfAudioCallback @ 0x140852480 (PopWnfAudioCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x14097E610 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x14097E708 (PopPowerRequestNotifyMobileHotspotChanged.c)
 * Callees:
 *     PopPowerRequestUnrevokeRequests @ 0x1403A5A90 (PopPowerRequestUnrevokeRequests.c)
 *     PopPowerRequestRevokeRequests @ 0x140581724 (PopPowerRequestRevokeRequests.c)
 */

__int64 PopPowerRequestHandleExecutionEnablementUpdate()
{
  int v0; // ecx

  v0 = 8;
  if ( PopPowerRequestConvertSystemToExecution )
    v0 = 10;
  if ( PopExecutionRequiredTimeout
    && (!byte_140C3F253
     || PopPowerRequestActiveAudioEnablesExecutionRequired && byte_140C3F252
     || byte_140C3F251
     || MEMORY[0xFFFFF78000000008] - qword_140C3F258 < 10000000
                                                     * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout) )
  {
    return PopPowerRequestUnrevokeRequests(v0);
  }
  else
  {
    return PopPowerRequestRevokeRequests(v0, 0);
  }
}
