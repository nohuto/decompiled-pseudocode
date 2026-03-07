__int64 __fastcall RIMHandlePowerDeviceArrival(struct RIMDEV *a1)
{
  unsigned int v2; // eax
  __int64 v3; // rcx

  if ( isChildPartition() )
  {
    *((_DWORD *)a1 + 329) = -1;
    *((_DWORD *)a1 + 330) = 0;
    return 0LL;
  }
  RIMQueryWakeCapableProperty(a1);
  *((_DWORD *)a1 + 329) = -1;
  v2 = RIMGetCurrentPowerInputMode();
  *((_DWORD *)a1 + 330) = v2;
  RIMUpdateDeviceForInputMode(a1, v2);
  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout(a1);
  if ( !*(_BYTE *)SGDGetUserGdiSessionState(v3) )
    return 0LL;
  return RIMHandleTTMDeviceArrival(a1);
}
