bool KiAreSoftUnparkingElectionsEnabled()
{
  if ( (KiHeteroSchedulerOptionsMask & 0x10) != 0 )
    return (KiHeteroSchedulerOptions & 0x10) != 0;
  Feature_SoftParkingElections__private_ReportDeviceUsage();
  return 1;
}
