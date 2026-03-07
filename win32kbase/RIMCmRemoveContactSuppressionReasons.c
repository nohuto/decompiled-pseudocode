_BOOL8 __fastcall RIMCmRemoveContactSuppressionReasons(__int64 a1, unsigned int *a2, unsigned int a3)
{
  int IsContactSuppressed; // eax
  unsigned int v7; // r15d
  int v8; // r14d
  BOOL v9; // esi
  int IsEnabledDeviceUsage; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  const struct RIMDEV *v13; // rcx

  IsContactSuppressed = RIMCmIsContactSuppressed((__int64)a2);
  v7 = a2[2];
  v8 = IsContactSuppressed;
  v9 = 0;
  if ( (a2[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 695);
  a2[2] &= ~a3;
  if ( v8 && !(unsigned int)RIMCmIsContactSuppressed((__int64)a2) )
  {
    v9 = 1;
    ++*(_DWORD *)(a1 + 1012);
  }
  if ( (v7 & a3) != 0 )
  {
    IsEnabledDeviceUsage = Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage();
    v11 = a2[2];
    v12 = a2[1];
    v13 = *(const struct RIMDEV **)(a1 + 16);
    if ( IsEnabledDeviceUsage )
      InputTraceLogging::RIM::UnsuppressContact(v13, v12, a3, v11, v9);
    else
      InputTraceLogging::RIM::SuppressContact(v13, v12, a3, v11, v9);
  }
  if ( *(_DWORD *)(a1 + 1008) < *(_DWORD *)(a1 + 1012) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 720);
  return v9;
}
