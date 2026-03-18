/*
 * XREFs of NVMeGetPowerState @ 0x1C000A1AC
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C0009354 (NVMeMaxOperationalPower.c)
 *     NVMeLogTelemetryControllerInfo @ 0x1C0009604 (NVMeLogTelemetryControllerInfo.c)
 *     NVMePowerInitialize @ 0x1C0009B20 (NVMePowerInitialize.c)
 *     NVMeSetPowerState @ 0x1C000A084 (NVMeSetPowerState.c)
 *     NVMeValidatePowerStates @ 0x1C000A58C (NVMeValidatePowerStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeGetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 1640);
  if ( a2 > 0x1Fu || a2 > *(_BYTE *)(v2 + 263) )
    return 0LL;
  else
    return v2 + 32 * (a2 + 64LL);
}
