void ImpReleaseLock()
{
  if ( (struct _KTHREAD *)qword_1C02D0988 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  qword_1C02D0988 = 0LL;
  ExReleaseResourceLite(ImpRequestLock);
  KeLeaveCriticalRegion();
}
