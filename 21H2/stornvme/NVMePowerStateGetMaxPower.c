/*
 * XREFs of NVMePowerStateGetMaxPower @ 0x1C0010964
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C000FCC0 (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C000FEB4 (NVMePowerInitialize.c)
 *     NVMePowerSetFState @ 0x1C00105A8 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C00106D0 (NVMePowerSetPerfState.c)
 *     NVMeValidatePowerStates @ 0x1C0010F10 (NVMeValidatePowerStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerStateGetMaxPower(unsigned __int16 *a1)
{
  if ( a1 )
    return *a1 * ((*((_BYTE *)a1 + 3) & 1) != 0 ? 100 : 10000);
  else
    return 0xFFFFFFFFLL;
}
