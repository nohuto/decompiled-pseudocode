/*
 * XREFs of PopProcessDisplayRequiredChange @ 0x14067CD44
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140281F9C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140282160 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x14028278C (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140282C34 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x14060526C (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PopProcessDisplayRequiredChange(__int64 a1, int a2)
{
  if ( a2 )
    PoEnergyContextUpdateComponentPower(a1, 12, a2);
}
