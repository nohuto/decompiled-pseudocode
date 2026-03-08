/*
 * XREFs of PpmHeteroIsMultiClassParkingEnabled @ 0x14038E12C
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x1402EBC70 (PpmParkCalculateUnparkCount.c)
 *     PpmParkRegisterParking @ 0x14038D880 (PpmParkRegisterParking.c)
 *     PpmCheckComputeHeteroResponse @ 0x140593FE0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x14040A518 (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 */

bool __fastcall PpmHeteroIsMultiClassParkingEnabled(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_ReportDeviceUsage(a1, a2);
  return PpmHeteroMultiClassParkingEnabled != 0;
}
