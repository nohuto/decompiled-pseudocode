/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x1C01AFF90
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E2D30 (rimApplyPointerDevicePolicies.c)
 *     rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1C00E3264 (rimPointerTransitionsPolicyUpdateStateAndApply.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C440 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C960 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C018C2BC (RIMSuppressAllActiveContacts.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01A7D40 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01A8108 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1C01A822C (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C01AAAC4 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01AAC08 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C01AAD98 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmIsContactSuppressed @ 0x1C00E35A6 (RIMCmIsContactSuppressed.c)
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C01AFAA4 (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 */

_BOOL8 __fastcall RIMCmAddContactSuppressionReasons(__int64 a1, unsigned int *a2, unsigned int a3)
{
  int IsContactSuppressed; // eax
  unsigned int v7; // r14d
  int v8; // r15d
  BOOL v9; // ebp

  IsContactSuppressed = RIMCmIsContactSuppressed((__int64)a2);
  v7 = a2[2];
  v8 = IsContactSuppressed;
  v9 = 0;
  if ( (a2[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 660);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 661);
  a2[2] |= a3;
  if ( !v8 && (unsigned int)RIMCmIsContactSuppressed((__int64)a2) )
  {
    if ( !*(_DWORD *)(a1 + 1012) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 666);
    --*(_DWORD *)(a1 + 1012);
    v9 = 1;
  }
  if ( (a3 & v7) != a3 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], a3, a2[2], v9);
  if ( *(_DWORD *)(a1 + 1008) < *(_DWORD *)(a1 + 1012) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 678);
  return v9;
}
