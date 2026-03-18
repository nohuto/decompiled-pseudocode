/*
 * XREFs of PopPowerRequestStatsFreeId @ 0x1407F10C4
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x1407F0070 (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsCleanup @ 0x1407F015C (PopPowerRequestStatsCleanup.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407F0C38 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestStatsFreeId(PVOID *P)
{
  if ( (*(_DWORD *)P & 2) != 0 )
    ExFreePoolWithTag(P[2], 0x54515750u);
  ExFreePoolWithTag(P, 0x54515750u);
}
