bool __fastcall PpmHeteroIsMultiClassParkingEnabled(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_ReportDeviceUsage(a1, a2);
  return PpmHeteroMultiClassParkingEnabled != 0;
}
