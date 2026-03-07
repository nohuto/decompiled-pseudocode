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
  dword_140C39864 = v0;
  result = (unsigned int)_InterlockedExchange(&dword_140C398A0, 0);
  qword_140C39898 = 0LL;
  PopPreSleepNotifyWorkItem = 0LL;
  qword_140C39890 = (__int64)PopPreSleepNotifyWorker;
  return result;
}
