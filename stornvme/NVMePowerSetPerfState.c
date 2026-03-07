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
        if ( v3 <= *(_BYTE *)(a1 + 1885) && v3 <= 0x1Fu )
        {
          LOBYTE(a2) = *(_BYTE *)(a2 + 16);
          NVMeSetPowerState(a1, a2);
          *(_BYTE *)(a1 + 1887) = v3;
          *(_BYTE *)(a1 + 1884) = v3;
        }
      }
    }
  }
  v4 = *(_DWORD *)(a1 + 1880);
  if ( (v4 & 0x80u) == 0
    || (*(_DWORD *)(a1 + 1880) = v4 & 0xFFFFFF7F, LOBYTE(v4) = NVMePerfStateTransition(a1), !(_BYTE)v4) )
  {
    *(_DWORD *)(a1 + 1928) &= ~1u;
  }
  return v4;
}
