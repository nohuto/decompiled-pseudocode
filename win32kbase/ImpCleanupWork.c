/*
 * XREFs of ImpCleanupWork @ 0x1C008D2F0
 * Callers:
 *     ImSessionStop @ 0x1C008A7A8 (ImSessionStop.c)
 *     ImSessionStart @ 0x1C008BE98 (ImSessionStart.c)
 * Callees:
 *     ImpReleaseLock @ 0x1C008A6FC (ImpReleaseLock.c)
 *     ImpAcquireLock @ 0x1C008A74C (ImpAcquireLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpCleanupLock @ 0x1C008D638 (ImpCleanupLock.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C00E1674 (Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage.c)
 */

__int64 ImpCleanupWork()
{
  PVOID v0; // rax
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  ImpAcquireLock();
  while ( 1 )
  {
    v0 = ImpRequestListHead;
    if ( ImpRequestListHead == &ImpRequestListHead )
      break;
    if ( *((PVOID **)ImpRequestListHead + 1) != &ImpRequestListHead
      || (v1 = *(_QWORD *)ImpRequestListHead, *(PVOID *)(*(_QWORD *)ImpRequestListHead + 8LL) != ImpRequestListHead) )
    {
      __fastfail(3u);
    }
    ImpRequestListHead = *(PVOID *)ImpRequestListHead;
    *(_QWORD *)(v1 + 8) = &ImpRequestListHead;
    ExFreePoolWithTag(v0, 0);
  }
  if ( ImpIsWorkerThreadEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ImpReleaseLock();
  if ( !(unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage(v3, v2, v4) )
  {
    if ( (struct _KTHREAD *)ImpWorkerThread != KeGetCurrentThread() )
      ZwWaitForSingleObject(ImpWorkerThreadHandle, 0, 0LL);
    ZwClose(ImpWorkerThreadHandle);
    ImpWorkerThreadHandle = 0LL;
    ExFreePoolWithTag(ImpWorkerEvent, 0);
  }
  return ImpCleanupLock();
}
