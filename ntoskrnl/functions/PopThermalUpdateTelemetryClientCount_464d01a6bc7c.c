void __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v4[0] = 0LL;
      v4[1] = -1LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v4);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer, 0LL, v2, v3);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalTelemetryLock);
}
