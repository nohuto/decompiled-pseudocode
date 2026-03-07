__int64 __fastcall ADAPTER_DISPLAY::InitializePowerManagement(ADAPTER_DISPLAY *this)
{
  __int64 v1; // r15
  int v2; // ebp
  unsigned int v3; // edi
  unsigned int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // rax

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v3 = 0;
  v5 = *(_DWORD *)(v1 + 3168);
  if ( v5 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v1 + 3024);
      if ( *(_DWORD *)(v6 + v7 + 208) == 1 )
      {
        v2 = DmmSetVidPnTargetPowerComponentIndex(*((struct VIDPN_MGR **)this + 13), *(_DWORD *)(v6 + v7 + 212), v3);
        if ( v2 < 0 )
          break;
      }
      ++v3;
      v6 += 520LL;
    }
    while ( v3 < v5 );
  }
  if ( (*((_DWORD *)this + 6) & 0x40) == 0 || DmmAreAllVidpnTargetsPowerComponents(*((struct VIDPN_MGR **)this + 13)) )
    return (unsigned int)v2;
  WdLogSingleEntry1(2LL, 4314LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Driver reported USB4 monitor support but did not expose all targets as PoFx components",
    4314LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
