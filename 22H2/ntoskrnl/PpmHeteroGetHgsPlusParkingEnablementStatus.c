/*
 * XREFs of PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x140390898
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14082E9E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage @ 0x140410C64 (Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage.c)
 */

bool PpmHeteroGetHgsPlusParkingEnablementStatus()
{
  char v0; // bl

  v0 = 0;
  Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage();
  if ( PopHeteroSystem == 5 )
    return PpmHeteroHgsThreadEnabled != 0;
  return v0;
}
