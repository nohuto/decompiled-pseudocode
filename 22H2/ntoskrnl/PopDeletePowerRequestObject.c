/*
 * XREFs of PopDeletePowerRequestObject @ 0x1406F56E0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x14034B808 (PopPowerRequestCleanUp.c)
 */

__int64 __fastcall PopDeletePowerRequestObject(unsigned int *a1)
{
  return PopPowerRequestCleanUp(a1);
}
