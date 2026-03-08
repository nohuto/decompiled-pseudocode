/*
 * XREFs of PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x14038E3D8
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage @ 0x14040B9A0 (Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage.c)
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
