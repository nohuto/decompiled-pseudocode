/*
 * XREFs of PopInitializePreSleepNotifications @ 0x1407D438C
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PopInitializePreSleepNotifications()
{
  unsigned int v0; // eax
  __int64 result; // rax

  v0 = PopPreSleepNotificationSeconds;
  if ( (unsigned int)PopPreSleepNotificationSeconds < 0x78 )
  {
    v0 = 120;
    PopPreSleepNotificationSeconds = 120;
  }
  if ( v0 > 0xE10 )
  {
    v0 = 3600;
    PopPreSleepNotificationSeconds = 3600;
  }
  dword_140C2044C = v0;
  result = (unsigned int)_InterlockedExchange(&dword_140C20480, 0);
  qword_140C20478 = 0LL;
  PopPreSleepNotifyWorkItem = 0LL;
  qword_140C20470 = (__int64)PopPreSleepNotifyWorker;
  return result;
}
