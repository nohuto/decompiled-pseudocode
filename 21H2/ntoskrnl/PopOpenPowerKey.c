/*
 * XREFs of PopOpenPowerKey @ 0x1403A7DDC
 * Callers:
 *     PopReadSystemAwayModePolicy @ 0x140773F64 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTraceHiberStats @ 0x14077460C (PopDiagTraceHiberStats.c)
 *     PopReadHiberbootPolicy @ 0x140779874 (PopReadHiberbootPolicy.c)
 *     PopEnableHiberFile @ 0x1407926A0 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x140793E98 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x140793F7C (PopApplyPolicy.c)
 *     PoGetLightestSystemStateForEject @ 0x1408E104C (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     PopOpenKey @ 0x1403A7E00 (PopOpenKey.c)
 */

__int64 __fastcall PopOpenPowerKey(__int64 a1)
{
  return PopOpenKey(a1, L"Control\\Session Manager\\Power", 131103LL);
}
