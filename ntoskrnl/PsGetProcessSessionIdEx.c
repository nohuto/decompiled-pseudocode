/*
 * XREFs of PsGetProcessSessionIdEx @ 0x1402BDFA0
 * Callers:
 *     PsApplyDeepFreezeOptimizations @ 0x14067CDA4 (PsApplyDeepFreezeOptimizations.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x14067CDE8 (PsRemoveDeepFreezeOptimizations.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopGetSettingNotificationName @ 0x14068CCC4 (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x14073CFC0 (PopGetSettingValue.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PsFreezeProcess @ 0x1407DD068 (PsFreezeProcess.c)
 *     PopGetSessionId @ 0x14081016C (PopGetSessionId.c)
 *     PopSetDisplayStatus @ 0x140880858 (PopSetDisplayStatus.c)
 *     DbgkpLkmdFireCallbacks @ 0x140937DC4 (DbgkpLkmdFireCallbacks.c)
 *     TtmCleanupCurrentSession @ 0x1409A0EB0 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1409A0FC0 (TtmInitCurrentSession.c)
 *     TtmiAcquireCurrentSession @ 0x1409A1950 (TtmiAcquireCurrentSession.c)
 *     TtmiLogCalloutStart @ 0x1409A3C14 (TtmiLogCalloutStart.c)
 *     TtmiLogCalloutStop @ 0x1409A3D50 (TtmiLogCalloutStop.c)
 *     TtmiLogCalloutWatchdogCrashSkipped @ 0x1409A3F8C (TtmiLogCalloutWatchdogCrashSkipped.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x1409A40F8 (TtmiLogCleanupCurrentSessionStart.c)
 *     TtmiLogCleanupCurrentSessionStop @ 0x1409A41A0 (TtmiLogCleanupCurrentSessionStop.c)
 *     TtmiLogDeviceArrivalNotified @ 0x1409A4310 (TtmiLogDeviceArrivalNotified.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1409A445C (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceAssignedTerminalEvent @ 0x1409A459C (TtmiLogDeviceAssignedTerminalEvent.c)
 *     TtmiLogDeviceDepartedTerminalEvent @ 0x1409A468C (TtmiLogDeviceDepartedTerminalEvent.c)
 *     TtmiLogDeviceDepartureNotified @ 0x1409A475C (TtmiLogDeviceDepartureNotified.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A4874 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     TtmiLogDeviceFromTerminalRemoved @ 0x1409A49B4 (TtmiLogDeviceFromTerminalRemoved.c)
 *     TtmiLogDeviceInputNotified @ 0x1409A4AE8 (TtmiLogDeviceInputNotified.c)
 *     TtmiLogDeviceSetInputWakeCapability @ 0x1409A4DAC (TtmiLogDeviceSetInputWakeCapability.c)
 *     TtmiLogDeviceToTerminalAssigned @ 0x1409A4EBC (TtmiLogDeviceToTerminalAssigned.c)
 *     TtmiLogDispatchApiStart @ 0x1409A4FAC (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x1409A507C (TtmiLogDispatchApiStop.c)
 *     TtmiLogDisplayPowerRequestSet @ 0x1409A516C (TtmiLogDisplayPowerRequestSet.c)
 *     TtmiLogEnterProximity @ 0x1409A529C (TtmiLogEnterProximity.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiLogExitProximity @ 0x1409A54C4 (TtmiLogExitProximity.c)
 *     TtmiLogInactivityTimerReset @ 0x1409A55D8 (TtmiLogInactivityTimerReset.c)
 *     TtmiLogInactivityTimoutUpdate @ 0x1409A56A8 (TtmiLogInactivityTimoutUpdate.c)
 *     TtmiLogInitCurrentSessionStart @ 0x1409A5778 (TtmiLogInitCurrentSessionStart.c)
 *     TtmiLogInitCurrentSessionStop @ 0x1409A5820 (TtmiLogInitCurrentSessionStop.c)
 *     TtmiLogInitiateModernStandbyTransitionStart @ 0x1409A58F0 (TtmiLogInitiateModernStandbyTransitionStart.c)
 *     TtmiLogInitiateModernStandbyTransitionStop @ 0x1409A59E4 (TtmiLogInitiateModernStandbyTransitionStop.c)
 *     TtmiLogProximityBlockedRequest @ 0x1409A5AB4 (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogProximityPowerPress @ 0x1409A5BD4 (TtmiLogProximityPowerPress.c)
 *     TtmiLogQueueCreated @ 0x1409A5D24 (TtmiLogQueueCreated.c)
 *     TtmiLogSessionActivate @ 0x1409A61A4 (TtmiLogSessionActivate.c)
 *     TtmiLogSessionDeactivate @ 0x1409A62E0 (TtmiLogSessionDeactivate.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x1409A6388 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 *     TtmiLogSessionPowerControlStart @ 0x1409A6798 (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x1409A688C (TtmiLogSessionPowerControlStop.c)
 *     TtmiLogSessionPowerStateChange @ 0x1409A6C08 (TtmiLogSessionPowerStateChange.c)
 *     TtmiLogTerminalCreated @ 0x1409A7140 (TtmiLogTerminalCreated.c)
 *     TtmiLogTerminalDisplayStateChangedEvent @ 0x1409A72C8 (TtmiLogTerminalDisplayStateChangedEvent.c)
 *     TtmiLogTerminalOffRequest @ 0x1409A76BC (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x1409A77D4 (TtmiLogTerminalOnRequest.c)
 *     TtmiLogTerminalStateMachine @ 0x1409A7B44 (TtmiLogTerminalStateMachine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSessionIdEx(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v1 + 8);
}
