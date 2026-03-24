/*
 * XREFs of NVMeGetPowerState @ 0x1C000EBE0
 * Callers:
 *     NVMeLogTelemetryControllerInfo @ 0x1C000F6F0 (NVMeLogTelemetryControllerInfo.c)
 *     NVMeMaxOperationalPower @ 0x1C000FCC0 (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C000FEB4 (NVMePowerInitialize.c)
 *     NVMePowerSetFState @ 0x1C00105A8 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C00106D0 (NVMePowerSetPerfState.c)
 *     NVMeValidatePowerStates @ 0x1C0010F10 (NVMeValidatePowerStates.c)
 *     NVMeSetPowerState @ 0x1C001BEC4 (NVMeSetPowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeGetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 1624);
  if ( a2 > 0x1Fu || a2 > *(_BYTE *)(v2 + 263) )
    return 0LL;
  else
    return v2 + 32 * (a2 + 64LL);
}
