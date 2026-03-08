/*
 * XREFs of PopPowerRequestStatsFreeId @ 0x14079B420
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x14073C194 (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsCleanup @ 0x14073C280 (PopPowerRequestStatsCleanup.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x14073C3F4 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestStatsFreeId(PVOID *P)
{
  if ( (*(_DWORD *)P & 2) != 0 )
    ExFreePoolWithTag(P[2], 0x54515750u);
  ExFreePoolWithTag(P, 0x54515750u);
}
