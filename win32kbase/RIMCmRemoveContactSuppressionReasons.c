/*
 * XREFs of RIMCmRemoveContactSuppressionReasons @ 0x1C01DECA4
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C01A9D04 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01D5E18 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01D61E0 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01D8CE0 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C01D8E70 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage @ 0x1C00DF2DC (Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage.c)
 *     ?UnsuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C00DF55C (-UnsuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmIsContactSuppressed @ 0x1C00F1A7A (RIMCmIsContactSuppressed.c)
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C01DDCC4 (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 */

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
