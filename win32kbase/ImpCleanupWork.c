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
