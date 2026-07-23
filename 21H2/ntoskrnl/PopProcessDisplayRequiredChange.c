/*
 * XREFs of PopProcessDisplayRequiredChange @ 0x140670990
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1402701DC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1402703A0 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x140270A38 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140270EE0 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x1406F499C (PoEnergyContextUpdateComponentPower.c)
 */

__int64 __fastcall PopProcessDisplayRequiredChange(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
    return PoEnergyContextUpdateComponentPower(a1, 12LL, a2);
  return result;
}
