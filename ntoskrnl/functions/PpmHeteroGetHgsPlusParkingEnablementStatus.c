bool PpmHeteroGetHgsPlusParkingEnablementStatus()
{
  char v0; // bl

  v0 = 0;
  Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage();
  if ( PopHeteroSystem == 5 )
    return PpmHeteroHgsThreadEnabled != 0;
  return v0;
}
