/*
 * XREFs of NVMeMaxOperationalPower @ 0x1C000FB54
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0003050 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C000314C (NVMePerfStateTransition.c)
 *     NVMeGetPowerState @ 0x1C0007C94 (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C001055C (NVMePowerStateGetMaxPower.c)
 */

void __fastcall NVMeMaxOperationalPower(__int64 a1, __int64 a2)
{
  signed __int8 v4; // r9
  __int64 PowerState; // rax
  unsigned __int64 v6; // rsi
  int v7; // r10d
  unsigned __int64 v8; // r11
  int v9; // eax
  signed __int8 v10; // cl

  if ( *(_DWORD *)(a2 + 4) >= 0x10u && *(_DWORD *)a2 )
  {
    v4 = 0;
    do
    {
      PowerState = NVMeGetPowerState(a1, v4);
      v6 = (unsigned int)NVMePowerStateGetMaxPower(PowerState) / 0x3E8;
      if ( v6 <= v8 )
        break;
      ++v4;
    }
    while ( v4 <= v7 );
    v9 = *(_DWORD *)(a1 + 1880);
    v10 = v4;
    if ( (unsigned __int8)v4 > (unsigned __int8)v7 )
      v10 = v7;
    *(_BYTE *)(a1 + 1888) = v4;
    *(_BYTE *)(a1 + 1888) = v10;
    if ( (v9 & 4) != 0 && *(unsigned __int8 *)(a1 + 1887) != v4 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1928), 0) )
      {
        *(_DWORD *)(a1 + 1880) |= 0x80u;
      }
      else if ( !NVMePerfStateTransition(a1) )
      {
        *(_DWORD *)(a1 + 1928) &= ~1u;
      }
    }
    *(_QWORD *)(a2 + 8) = v6;
  }
}
