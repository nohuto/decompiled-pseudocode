/*
 * XREFs of PopPowerRequestHandleExecutionEnablementUpdate @ 0x1407EE888
 * Callers:
 *     PopUpdatePdcSystemIdleState @ 0x140752ECC (PopUpdatePdcSystemIdleState.c)
 *     PopWnfAudioCallback @ 0x1407EE7A0 (PopWnfAudioCallback.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408630F0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140989DA0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x140989E98 (PopPowerRequestNotifyMobileHotspotChanged.c)
 * Callees:
 *     PopPowerRequestUnrevokeRequests @ 0x140369A40 (PopPowerRequestUnrevokeRequests.c)
 *     PopPowerRequestRevokeRequests @ 0x140397BB4 (PopPowerRequestRevokeRequests.c)
 */

__int64 PopPowerRequestHandleExecutionEnablementUpdate()
{
  int v0; // ecx

  v0 = 8;
  if ( PopPowerRequestConvertSystemToExecution )
    v0 = 10;
  if ( PopExecutionRequiredTimeout
    && (!byte_140C24513
     || PopPowerRequestActiveAudioEnablesExecutionRequired && byte_140C24512
     || byte_140C24511
     || MEMORY[0xFFFFF78000000008] - qword_140C24518 < 10000000
                                                     * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout) )
  {
    return PopPowerRequestUnrevokeRequests(v0);
  }
  else
  {
    return PopPowerRequestRevokeRequests(v0, 0);
  }
}
