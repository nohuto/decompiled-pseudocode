/*
 * XREFs of Feature_MultiCoreClasses__private_IsEnabledPreCheck @ 0x140255E40
 * Callers:
 *     PpmPerfSnapUtility @ 0x1402559F0 (PpmPerfSnapUtility.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x1403905EC (PpmHeteroIsMultiClassParkingEnabled.c)
 * Callees:
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x14040FA6C (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 */

__int64 __fastcall Feature_MultiCoreClasses__private_IsEnabledPreCheck(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_ReportDeviceUsage(a1, a2);
  return 1LL;
}
