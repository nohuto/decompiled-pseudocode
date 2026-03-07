_BOOL8 __fastcall KeIsMultiCoreClassesEnabled(__int64 a1, __int64 a2)
{
  Feature_MultiCoreClasses__private_ReportDeviceUsage(a1, a2);
  return PpmHeteroMultiCoreClassesEnabled != 0;
}
