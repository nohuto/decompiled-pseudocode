/*
 * XREFs of ImpCleanupLock @ 0x1C008D638
 * Callers:
 *     ImpInitializeWork @ 0x1C0089C08 (ImpInitializeWork.c)
 *     ImpCleanupWork @ 0x1C008D2F0 (ImpCleanupWork.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

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
