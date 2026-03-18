/*
 * XREFs of NVMePowerSetFState @ 0x1C000A004
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0005860 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeSetPowerState @ 0x1C000A084 (NVMeSetPowerState.c)
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C000B288 (NVMeUpdateResumeLatencyTolerance.c)
 *     NVMeSetFStateIdleTimer @ 0x1C0019EA0 (NVMeSetFStateIdleTimer.c)
 */

void __fastcall NVMePowerSetFState(_BYTE *a1, __int64 a2)
{
  char v3; // al
  unsigned __int8 v4; // di
  int v5; // eax

  if ( *(_DWORD *)(a2 + 4) >= 0x18u && *(_DWORD *)a2 )
  {
    v3 = *(_BYTE *)(a2 + 20);
    a1[1690] = v3;
    if ( *(_DWORD *)(a2 + 20) )
      v4 = v3 + a1[1685];
    else
      v4 = a1[1687];
    if ( v4 <= 0x1Fu )
    {
      LOBYTE(a2) = v4;
      NVMeSetPowerState(a1, a2);
      v5 = (unsigned __int8)a1[1690];
      a1[1684] = v4;
      if ( (_BYTE)v5 )
      {
        if ( v5 < (unsigned __int8)a1[1689] - 1 )
        {
          if ( (unsigned __int8)NVMeUpdateResumeLatencyTolerance(a1) )
            NVMeSetFStateIdleTimer(a1);
        }
      }
    }
  }
}
