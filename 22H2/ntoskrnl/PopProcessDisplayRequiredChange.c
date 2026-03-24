/*
 * XREFs of PopProcessDisplayRequiredChange @ 0x1406F6040
 * Callers:
 *     PoClearPowerRequestInternal @ 0x14034AFAC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x14034B170 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x14034B808 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14034BCB0 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x14060526C (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PopProcessDisplayRequiredChange(__int64 a1, int a2)
{
  if ( a2 )
    PoEnergyContextUpdateComponentPower(a1, 12, a2);
}
