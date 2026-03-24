/*
 * XREFs of WheapReportDeferredLiveDumps @ 0x14095E1DC
 * Callers:
 *     WheaCrashDumpInitializationComplete @ 0x1407D43E4 (WheaCrashDumpInitializationComplete.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     WheapReportLiveDump @ 0x14095E2E4 (WheapReportLiveDump.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 WheapReportDeferredLiveDumps()
{
  void *v0; // rbx
  __int64 v1; // rax
  bool v2; // di
  unsigned int v3; // esi
  __int64 v4; // rax

  v0 = 0LL;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.DriverObject);
  if ( *(struct _DEVICE_OBJECT **)&WheapDispatchPtr.DeviceType != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceType )
  {
    v0 = *(void **)&WheapDispatchPtr.DeviceType;
    v1 = **(_QWORD **)&WheapDispatchPtr.DeviceType;
    if ( *(struct _DEVICE_OBJECT **)(*(_QWORD *)&WheapDispatchPtr.DeviceType + 8LL) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceType
      || *(_QWORD *)(v1 + 8) != *(_QWORD *)&WheapDispatchPtr.DeviceType )
    {
LABEL_18:
      __fastfail(3u);
    }
    *(_QWORD *)&WheapDispatchPtr.DeviceType = **(_QWORD **)&WheapDispatchPtr.DeviceType;
    *(_QWORD *)(v1 + 8) = &WheapDispatchPtr.DeviceType;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.DriverObject);
  v2 = 0;
  v3 = 0;
  while ( v0 )
  {
    if ( !v2 )
      v3 = WheapReportLiveDump(v0);
    ExFreePoolWithTag(v0, 0x61656857u);
    if ( !v2 )
      v2 = v3 != 0;
    ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.DriverObject);
    v0 = *(void **)&WheapDispatchPtr.DeviceType;
    if ( *(struct _DEVICE_OBJECT **)&WheapDispatchPtr.DeviceType == (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceType )
    {
      v0 = 0LL;
    }
    else
    {
      if ( *(struct _DEVICE_OBJECT **)(*(_QWORD *)&WheapDispatchPtr.DeviceType + 8LL) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceType )
        goto LABEL_18;
      v4 = **(_QWORD **)&WheapDispatchPtr.DeviceType;
      if ( *(_QWORD *)(**(_QWORD **)&WheapDispatchPtr.DeviceType + 8LL) != *(_QWORD *)&WheapDispatchPtr.DeviceType )
        goto LABEL_18;
      *(_QWORD *)&WheapDispatchPtr.DeviceType = **(_QWORD **)&WheapDispatchPtr.DeviceType;
      *(_QWORD *)(v4 + 8) = &WheapDispatchPtr.DeviceType;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.DriverObject);
  }
  return v3;
}
