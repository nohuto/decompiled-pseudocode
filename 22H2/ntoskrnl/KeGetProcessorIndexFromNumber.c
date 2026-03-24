/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140344E90
 * Callers:
 *     HalpInterruptSendIpi @ 0x1402201D0 (HalpInterruptSendIpi.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140307180 (KeQueryLogicalProcessorRelationship.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14031CAE4 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpcEx @ 0x14032A950 (KeSetTargetProcessorDpcEx.c)
 *     PoGetIdleTimes @ 0x140344D4C (PoGetIdleTimes.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     HalpInterruptDestinationToTarget @ 0x1403787A0 (HalpInterruptDestinationToTarget.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A2E4 (KeSetIdealProcessorThreadByNumber.c)
 *     HalGetInterruptTargetInformation @ 0x1403C9390 (HalGetInterruptTargetInformation.c)
 *     HalSendNMI @ 0x1404BDCC0 (HalSendNMI.c)
 *     HalpInterruptDpReplaceBegin @ 0x1404D699C (HalpInterruptDpReplaceBegin.c)
 *     PpmClearSimulatedIdle @ 0x14056578C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405676E4 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405683E0 (PpmUpdateProcessorIdleVeto.c)
 *     PspBuildCreateProcessContext @ 0x1406090A4 (PspBuildCreateProcessContext.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     IopConnectInterrupt @ 0x1407617EC (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x1407913F0 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408E22F0 (PpmInstallPlatformIdleStates.c)
 *     PpmClearSimulatedLoad @ 0x1408E6134 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E625C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E64C0 (PpmSetSimulatedLoad.c)
 *     HalpInterruptReinitialize @ 0x140995D68 (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A90BC (HalpInterruptUpdateLocalUnitIdentifier.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetProcessorIndexFromNumber(PPROCESSOR_NUMBER ProcNumber)
{
  __int64 Group; // rax
  __int64 Number; // rdx
  ULONG result; // eax

  if ( ProcNumber->Reserved )
    return -1;
  Group = ProcNumber->Group;
  if ( !(_WORD)Group && !ProcNumber->Number )
    return 0;
  if ( (unsigned __int16)Group >= (unsigned __int16)KiMaximumGroups )
    return -1;
  Number = ProcNumber->Number;
  if ( (unsigned __int8)Number >= 0x40u )
    return -1;
  result = KiProcessorNumberToIndexMappingTable[64 * Group + Number];
  if ( !result )
    return -1;
  return result;
}
