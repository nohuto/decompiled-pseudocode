/*
 * XREFs of NVMePowerSetPerfState @ 0x1C0019C58
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0005860 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeSetPowerState @ 0x1C000A084 (NVMeSetPowerState.c)
 *     NVMePerfStateTransition @ 0x1C0019B68 (NVMePerfStateTransition.c)
 */

char __fastcall NVMePowerSetPerfState(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // di
  int v4; // eax

  if ( *(_DWORD *)(a2 + 4) >= 0x18u )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_BYTE *)(a2 + 12) )
      {
        v3 = *(_BYTE *)(a2 + 16);
        if ( v3 <= *(_BYTE *)(a1 + 1685) && v3 <= 0x1Fu )
        {
          NVMeSetPowerState(a1, *(_BYTE *)(a2 + 16));
          *(_BYTE *)(a1 + 1687) = v3;
          *(_BYTE *)(a1 + 1684) = v3;
        }
      }
    }
  }
  v4 = *(_DWORD *)(a1 + 1680);
  if ( (v4 & 0x80u) == 0
    || (*(_DWORD *)(a1 + 1680) = v4 & 0xFFFFFF7F, LOBYTE(v4) = NVMePerfStateTransition(a1), !(_BYTE)v4) )
  {
    *(_DWORD *)(a1 + 1728) &= ~1u;
  }
  return v4;
}
