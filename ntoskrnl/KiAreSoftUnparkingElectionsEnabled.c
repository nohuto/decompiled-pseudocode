/*
 * XREFs of KiAreSoftUnparkingElectionsEnabled @ 0x14057B67C
 * Callers:
 *     KiShouldSoftParkElectionBePerformed @ 0x140258430 (KiShouldSoftParkElectionBePerformed.c)
 *     KiChooseTargetProcessor @ 0x140258FC0 (KiChooseTargetProcessor.c)
 *     KiCanSelectSoftParkedProcessor @ 0x14036DE9C (KiCanSelectSoftParkedProcessor.c)
 * Callees:
 *     Feature_SoftParkingElections__private_ReportDeviceUsage @ 0x14040B080 (Feature_SoftParkingElections__private_ReportDeviceUsage.c)
 */

bool KiAreSoftUnparkingElectionsEnabled()
{
  if ( (KiHeteroSchedulerOptionsMask & 0x10) != 0 )
    return (KiHeteroSchedulerOptions & 0x10) != 0;
  Feature_SoftParkingElections__private_ReportDeviceUsage();
  return 1;
}
