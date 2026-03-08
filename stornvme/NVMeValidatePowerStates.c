/*
 * XREFs of NVMeValidatePowerStates @ 0x1C0010B08
 * Callers:
 *     NVMePowerInitialize @ 0x1C000FCC4 (NVMePowerInitialize.c)
 * Callees:
 *     NVMeGetPowerState @ 0x1C0007C94 (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C001055C (NVMePowerStateGetMaxPower.c)
 */

char __fastcall NVMeValidatePowerStates(__int64 a1)
{
  __int64 PowerState; // r8
  unsigned __int8 v3; // r11
  unsigned __int8 v4; // r10
  __int64 v5; // rbx
  unsigned __int16 *v6; // r8
  unsigned int MaxPower; // eax
  char v8; // r9
  char v9; // r10
  unsigned __int8 v10; // r11
  unsigned int v11; // edx

  PowerState = NVMeGetPowerState(a1, 0);
  if ( (*(_BYTE *)(PowerState + 3) & 2) != 0 )
    return 0;
  v4 = 1;
  if ( v3 > 1u )
  {
    while ( 1 )
    {
      v5 = PowerState;
      NVMeGetPowerState(a1, v4);
      NVMePowerStateGetMaxPower((unsigned __int16 *)v5);
      MaxPower = NVMePowerStateGetMaxPower(v6);
      if ( MaxPower > v11 )
        break;
      if ( (*(_BYTE *)(PowerState + 3) & 2) != 0 )
      {
        if ( v8 )
        {
          if ( (*(_BYTE *)(v5 + 3) & 2) == 0 )
            return 0;
        }
        else if ( (*(_BYTE *)(v5 + 3) & 2) != 0 )
        {
          return 0;
        }
      }
      else if ( v8 )
      {
        return 0;
      }
      v4 = v9 + 1;
      if ( v4 >= v10 )
        return 1;
    }
    return 0;
  }
  return 1;
}
