/*
 * XREFs of WheapReportDeferredLiveDumps @ 0x14095E36C
 * Callers:
 *     WheaCrashDumpInitializationComplete @ 0x1407D4634 (WheaCrashDumpInitializationComplete.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     WheapReportLiveDump @ 0x14095E474 (WheapReportLiveDump.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 WheapReportDeferredLiveDumps()
{
  struct _DRIVER_OBJECT *DriverObject; // rbx
  __int64 v1; // rax
  bool v2; // di
  unsigned int v3; // esi
  __int64 v4; // rax

  DriverObject = 0LL;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.Timer);
  if ( (struct _DRIVER_OBJECT **)WheapDispatchPtr.DriverObject != &WheapDispatchPtr.DriverObject )
  {
    DriverObject = WheapDispatchPtr.DriverObject;
    v1 = *(_QWORD *)WheapDispatchPtr.DriverObject;
    if ( WheapDispatchPtr.DriverObject->DeviceObject != (PDEVICE_OBJECT)&WheapDispatchPtr.DriverObject
      || *(struct _DRIVER_OBJECT **)(v1 + 8) != WheapDispatchPtr.DriverObject )
    {
LABEL_18:
      __fastfail(3u);
    }
    WheapDispatchPtr.DriverObject = *(struct _DRIVER_OBJECT **)WheapDispatchPtr.DriverObject;
    *(_QWORD *)(v1 + 8) = &WheapDispatchPtr.DriverObject;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Timer);
  v2 = 0;
  v3 = 0;
  while ( DriverObject )
  {
    if ( !v2 )
      v3 = WheapReportLiveDump(DriverObject);
    ExFreePoolWithTag(DriverObject, 0x61656857u);
    if ( !v2 )
      v2 = v3 != 0;
    ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.Timer);
    DriverObject = WheapDispatchPtr.DriverObject;
    if ( (struct _DRIVER_OBJECT **)WheapDispatchPtr.DriverObject == &WheapDispatchPtr.DriverObject )
    {
      DriverObject = 0LL;
    }
    else
    {
      if ( WheapDispatchPtr.DriverObject->DeviceObject != (PDEVICE_OBJECT)&WheapDispatchPtr.DriverObject )
        goto LABEL_18;
      v4 = *(_QWORD *)WheapDispatchPtr.DriverObject;
      if ( *(struct _DRIVER_OBJECT **)(*(_QWORD *)WheapDispatchPtr.DriverObject + 8LL) != WheapDispatchPtr.DriverObject )
        goto LABEL_18;
      WheapDispatchPtr.DriverObject = *(struct _DRIVER_OBJECT **)WheapDispatchPtr.DriverObject;
      *(_QWORD *)(v4 + 8) = &WheapDispatchPtr.DriverObject;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Timer);
  }
  return v3;
}
