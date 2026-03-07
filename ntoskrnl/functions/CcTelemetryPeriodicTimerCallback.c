char CcTelemetryPeriodicTimerCallback()
{
  signed __int32 IsEnabledDeviceUsage; // eax
  char HasGlobalTelemetryChanged; // si

  IsEnabledDeviceUsage = Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage();
  if ( !IsEnabledDeviceUsage || CcTelemetryGlobalData )
  {
    _InterlockedExchange(&dword_140C5F618, 0);
    if ( !(unsigned int)Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage() )
    {
      IsEnabledDeviceUsage = _InterlockedCompareExchange(&CcProviderRegistrationInProgress, 1, 0);
      if ( IsEnabledDeviceUsage )
      {
        if ( !CcProviderRegistrationComplete )
          return IsEnabledDeviceUsage;
      }
      else
      {
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C03738, 0LL, 0LL);
        CcProviderRegistrationComplete = 1;
      }
    }
    Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage();
    IsEnabledDeviceUsage = _InterlockedIncrement(&dword_140C5F610);
    if ( IsEnabledDeviceUsage == 1 )
    {
      IsEnabledDeviceUsage = _InterlockedCompareExchange(&dword_140C5F614, 1, 0);
      if ( !IsEnabledDeviceUsage )
      {
        ++qword_140C5F510;
        qword_140C5F518 += (unsigned int)CcNumberOfMappedVacbs;
        HasGlobalTelemetryChanged = CcHasGlobalTelemetryChanged();
        CcForEachPartition(
          (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcPartitionTelemetryCallback,
          0LL,
          1,
          1);
        LOBYTE(IsEnabledDeviceUsage) = CcPostVolumeTelemetry();
        if ( byte_140C5F501 || !HasGlobalTelemetryChanged )
          _InterlockedExchange(&dword_140C5F614, 0);
        else
          LOBYTE(IsEnabledDeviceUsage) = KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140C5F620);
      }
    }
    _InterlockedDecrement(&dword_140C5F610);
  }
  return IsEnabledDeviceUsage;
}
