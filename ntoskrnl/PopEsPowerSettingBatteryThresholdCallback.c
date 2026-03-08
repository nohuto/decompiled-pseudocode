/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x140860ED0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x14086E7F0 (PopEsWorkItemSchedule.c)
 */

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
