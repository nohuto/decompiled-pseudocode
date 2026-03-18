/*
 * XREFs of NVMeMaxOperationalPower @ 0x1C0009354
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0005860 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeGetPowerState @ 0x1C000A1AC (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C000A634 (NVMePowerStateGetMaxPower.c)
 *     NVMePerfStateTransition @ 0x1C0019B68 (NVMePerfStateTransition.c)
 */

void __fastcall NVMeMaxOperationalPower(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  signed __int8 v4; // r9
  __int64 PowerState; // rax
  int v6; // r10d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r11
  signed __int8 v9; // al

  v2 = a2;
  if ( *(_DWORD *)(a2 + 4) >= 0x10u && *(_DWORD *)a2 )
  {
    v4 = 0;
    do
    {
      LOBYTE(a2) = v4;
      PowerState = NVMeGetPowerState(a1, a2);
      a2 = (unsigned int)NVMePowerStateGetMaxPower(PowerState) / 0x3E8;
      v7 = a2;
      if ( a2 <= v8 )
        break;
      v6 = *(unsigned __int8 *)(a1 + 1685);
      ++v4;
    }
    while ( v4 <= v6 );
    v9 = v4;
    if ( (unsigned __int8)v4 > (unsigned __int8)v6 )
      v9 = v6;
    *(_BYTE *)(a1 + 1688) = v9;
    if ( (*(_DWORD *)(a1 + 1680) & 4) != 0 && *(unsigned __int8 *)(a1 + 1687) != v4 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1728), 0) )
      {
        *(_DWORD *)(a1 + 1680) |= 0x80u;
      }
      else if ( !(unsigned __int8)NVMePerfStateTransition(a1) )
      {
        *(_DWORD *)(a1 + 1728) &= ~1u;
      }
    }
    *(_QWORD *)(v2 + 8) = v7;
  }
}
