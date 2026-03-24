/*
 * XREFs of PopOpenPowerKey @ 0x1403A758C
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x1407747F8 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x140774EA0 (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x1407795B4 (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x14079B350 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14079CB48 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14079CC2C (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x1408E0F3C (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x1403A75B0 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
