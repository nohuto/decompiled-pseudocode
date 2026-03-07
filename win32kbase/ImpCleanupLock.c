__int64 ImpCleanupLock()
{
  NTSTATUS v0; // ebx

  if ( !ImpRequestLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v0 = ExDeleteResourceLite(ImpRequestLock);
  if ( v0 >= 0 )
  {
    ExFreePoolWithTag(ImpRequestLock, 0);
    ImpRequestLock = 0LL;
  }
  return (unsigned int)v0;
}
