/*
 * XREFs of ImpCleanupLock @ 0x1C00C2F1C
 * Callers:
 *     ImpInitializeWork @ 0x1C007AD6C (ImpInitializeWork.c)
 *     ImpCleanupWork @ 0x1C00C2E38 (ImpCleanupWork.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
