/*
 * XREFs of PopOpenPowerKey @ 0x1403A7C8C
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x140773DA4 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x14077444C (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x1407796B4 (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x1407910F0 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1407928E8 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1407929CC (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x1408E0EEC (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x1403A7CB0 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
