void __fastcall NVMePowerSetFState(_BYTE *a1, __int64 a2)
{
  char v3; // di
  unsigned __int8 v4; // di
  int v5; // eax

  if ( *(_DWORD *)(a2 + 4) >= 0x18u && *(_DWORD *)a2 )
  {
    v3 = *(_BYTE *)(a2 + 20);
    a1[1890] = v3;
    if ( *(_DWORD *)(a2 + 20) )
      v4 = a1[1885] + v3;
    else
      v4 = a1[1887];
    if ( v4 <= 0x1Fu )
    {
      LOBYTE(a2) = v4;
      NVMeSetPowerState(a1, a2);
      v5 = (unsigned __int8)a1[1890];
      a1[1884] = v4;
      if ( (_BYTE)v5 )
      {
        if ( v5 < (unsigned __int8)a1[1889] - 1 )
        {
          if ( (unsigned __int8)NVMeUpdateResumeLatencyTolerance(a1) )
            NVMeSetFStateIdleTimer(a1);
        }
      }
    }
  }
}
