void __fastcall PspSetProcessTimerResolutionPolicy(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rcx

  if ( KeDisableLowQosTimerResolution )
  {
    v2 = *(_DWORD *)(a1 + 2172);
    if ( a2 )
    {
      if ( (v2 & 0x4000000) == 0 )
        return;
      _InterlockedAnd((volatile signed __int32 *)(a1 + 2172), 0xFBFFFFFF);
    }
    else
    {
      if ( (v2 & 0x4000000) != 0 )
        return;
      _InterlockedOr((volatile signed __int32 *)(a1 + 2172), 0x4000000u);
    }
    if ( (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 )
    {
      PoTraceSystemTimerResolutionIgnore(a1);
      LOBYTE(v3) = 1;
      ExAcquireTimeRefreshLock(v3);
      ExpUpdateTimerResolution(0, 0, 0LL);
      ExReleaseResourceLite(&ExpTimeRefreshLock);
      KeLeaveCriticalRegion();
    }
  }
}
