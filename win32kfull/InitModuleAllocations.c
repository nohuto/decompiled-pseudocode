// write access to const memory has been detected, the output may be wrong!
__int64 InitModuleAllocations()
{
  __int64 v0; // rcx
  __int64 result; // rax

  FastGetProfileDword(0LL, 2LL, L"USERExtraInstrumentations");
  Feature_AtomicCheckFailure__private_ReportDeviceUsage(v0);
  gdwExtraInstrumentations |= 1u;
  result = gdwExtraInstrumentations;
  if ( (gdwExtraInstrumentations & 4) != 0 )
  {
    result = gfRecordPnpNotification;
    gfRecordPnpNotification = 1;
  }
  return result;
}
