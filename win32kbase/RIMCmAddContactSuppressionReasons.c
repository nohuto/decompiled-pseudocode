/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x1C01DE1B0
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00F1204 (rimApplyPointerDevicePolicies.c)
 *     rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1C00F1738 (rimPointerTransitionsPolicyUpdateStateAndApply.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01A93A0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C01A98C0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01B9F94 (RIMSuppressAllActiveContacts.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01D5E18 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01D61E0 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1C01D6304 (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C01D8B9C (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01D8CE0 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C01D8E70 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmIsContactSuppressed @ 0x1C00F1A7A (RIMCmIsContactSuppressed.c)
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C01DDCC4 (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
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
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 661);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 662);
  a2[2] |= a3;
  if ( !v8 && (unsigned int)RIMCmIsContactSuppressed((__int64)a2) )
  {
    if ( !*(_DWORD *)(a1 + 1012) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 667);
    --*(_DWORD *)(a1 + 1012);
    v9 = 1;
  }
  if ( (a3 & v7) != a3 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], a3, a2[2], v9);
  if ( *(_DWORD *)(a1 + 1008) < *(_DWORD *)(a1 + 1012) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 679);
  return v9;
}
