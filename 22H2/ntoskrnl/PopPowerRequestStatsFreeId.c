/*
 * XREFs of PopPowerRequestStatsFreeId @ 0x1407A8AB4
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x1407A7CEC (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsCleanup @ 0x1407A7DD8 (PopPowerRequestStatsCleanup.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A8268 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestStatsFreeId(PVOID *P)
{
  if ( (*(_DWORD *)P & 2) != 0 )
    ExFreePoolWithTag(P[2], 0x54515750u);
  ExFreePoolWithTag(P, 0x54515750u);
}
