/*
 * XREFs of ?RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180199860
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180199900 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 * Callees:
 *     ?RecordFeatureUsage@UsageIndexes@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1801113D4 (-RecordFeatureUsage@UsageIndexes@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180199AA4 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

char __fastcall wil::details_abi::FeatureStateData::RecordFeatureUsage(
        wil::details_abi::FeatureStateData *a1,
        unsigned int a2,
        unsigned int a3)
{
  char v7; // bl

  if ( a3 == 254 )
  {
    wil::details_abi::FeatureStateData::RecordUsage(a1);
    return 1;
  }
  else if ( a3 < 0xC8 || (int)a3 >= 256 && a3 < 0x200 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)a1);
    v7 = wil::details_abi::UsageIndexes::RecordFeatureUsage((__int64)a1 + 8, a2, a3);
    if ( a1 )
      ReleaseSRWLockExclusive((PSRWLOCK)a1);
    return v7;
  }
  else
  {
    return 0;
  }
}
