char __fastcall PopDirectedDripsResumeDevices(signed __int32 *a1, char a2)
{
  __int64 v4; // rbp
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int16 v7; // di
  signed __int32 v8; // eax
  signed __int32 v9; // ett

  v4 = MEMORY[0xFFFFF78000000008];
  _m_prefetchw(a1);
  v5 = *a1;
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange(a1, v5, v5);
  }
  while ( v6 != v5 );
  v7 = v5;
  if ( (v5 & 0x10) != 0 )
  {
    *((_BYTE *)a1 + 85) = 1;
    PoBroadcastSystemState(a1 + 15);
    _InterlockedOr(a1, 0x20u);
  }
  if ( (v7 & 0x80u) != 0 )
    PopDirectedDripsDestroyBroadcast();
  if ( !a2 && (v7 & 0x200) == 0 )
  {
    _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
    v8 = PopDirectedDripsUmTestDeviceCount;
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v8, v8);
    }
    while ( v9 != v8 );
    if ( !v8 )
      PopFxClearDirectedDripsCandidateDeviceList();
  }
  _InterlockedAnd(a1, 0xFFFFFF6F);
  if ( !a2 )
    PopDirectedDripsReleaseTransitionLock(a1);
  return PopDirectedDripsDiagTraceNotifyDevices(0, 0, (MEMORY[0xFFFFF78000000008] - v4) / 0x989680uLL);
}
