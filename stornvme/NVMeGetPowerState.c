/*
 * XREFs of NVMeGetPowerState @ 0x1C0007C94
 * Callers:
 *     NVMeLogTelemetryControllerInfo @ 0x1C0008CF4 (NVMeLogTelemetryControllerInfo.c)
 *     NVMeMaxOperationalPower @ 0x1C000FB54 (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C000FCC4 (NVMePowerInitialize.c)
 *     NVMeValidatePowerStates @ 0x1C0010B08 (NVMeValidatePowerStates.c)
 *     NVMeSetPowerState @ 0x1C002413C (NVMeSetPowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeGetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 1840);
  if ( a2 > 0x1Fu || a2 > *(_BYTE *)(v2 + 263) )
    return 0LL;
  else
    return v2 + 32 * (a2 + 64LL);
}
