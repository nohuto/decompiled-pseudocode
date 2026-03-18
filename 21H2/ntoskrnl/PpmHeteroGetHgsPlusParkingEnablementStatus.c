/*
 * XREFs of PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1403CF1BC
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140849B04 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 */

bool PpmHeteroGetHgsPlusParkingEnablementStatus()
{
  char v0; // bl
  int v2; // [rsp+30h] [rbp-18h]

  v0 = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_HgsPlusParkingSupportRequired__private_reporting,
    0x1E8F3D1u,
    0,
    0,
    (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
    1u,
    v2);
  if ( PopHeteroSystem == 5 )
    return PpmHeteroHgsThreadEnabled != 0;
  return v0;
}
