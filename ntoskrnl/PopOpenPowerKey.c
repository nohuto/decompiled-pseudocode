/*
 * XREFs of PopOpenPowerKey @ 0x1403900C8
 * Callers:
 *     PopResetCurrentPolicies @ 0x140829F88 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14082A06C (PopApplyPolicy.c)
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 *     PoGetLightestSystemStateForEject @ 0x14097D470 (PoGetLightestSystemStateForEject.c)
 *     PopReadHiberbootPolicy @ 0x14097DFFC (PopReadHiberbootPolicy.c)
 *     PopReadSystemAwayModePolicy @ 0x14097E0D8 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x14098C828 (PopDiagTraceHiberStats.c)
 * Callees:
 *     PopOpenKey @ 0x1403900E4 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power");
}
