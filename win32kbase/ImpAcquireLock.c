struct _KTHREAD *ImpAcquireLock()
{
  struct _KTHREAD *result; // rax

  KeEnterCriticalRegion();
  if ( (struct _KTHREAD *)qword_1C02D0988 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ExAcquireResourceExclusiveLite(ImpRequestLock, 1u);
  result = KeGetCurrentThread();
  qword_1C02D0988 = (__int64)result;
  return result;
}
