__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    dword_140C3D4D0 = *a2;
    if ( (unsigned int)dword_140C3D4D0 > 0x64 )
      dword_140C3D4D0 = 100;
    PopReleaseRwLock((ULONG_PTR)&PopEsLock);
    PopEsWorkItemSchedule(2LL);
  }
  return v4;
}
