/*
 * XREFs of DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000B1E0
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C01C3FC0 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C005FF40 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060170 (DpiMiracastStopMiracastSessionSync.c)
 */

LONG __fastcall DxgkMiracastEnforceInactiveMonitorPolicy(_DWORD *a1)
{
  void *v1; // rbp
  __int64 i; // rbx
  void *v4; // rdi
  LONG result; // eax
  __int64 v6; // rcx

  v1 = 0LL;
  AcquireMiniportListMutex();
  for ( i = qword_1C013B8A0; (__int64 *)i != &qword_1C013B8A0; i = *(_QWORD *)i )
  {
    v1 = (void *)i;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(i + 32);
    *(_QWORD *)(i + 88) = KeGetCurrentThread();
    if ( (unsigned int)(*(_DWORD *)(i + 408) - 1) <= 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(i + 432) + 64LL);
      if ( *(_DWORD *)(v6 + 2672) == *a1 && *(_DWORD *)(v6 + 2676) == a1[1] )
      {
        *(_BYTE *)(i + 589) = 1;
      }
      else if ( *(_BYTE *)(i + 589) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(i + 24));
        _InterlockedXor((volatile signed __int32 *)(i + 28), (unsigned int)DxgkMiracastEnforceInactiveMonitorPolicy);
        *(_QWORD *)(i + 88) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
        break;
      }
    }
    *(_QWORD *)(i + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
  }
  v4 = 0LL;
  if ( (__int64 *)i != &qword_1C013B8A0 )
    v4 = v1;
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  result = KeReleaseMutex(Mutex, 0);
  if ( v4 )
  {
    DpiMiracastStopMiracastSessionSync(v4, 134, 0);
    return DpiMiracastReleaseMiracastDeviceContext(v4);
  }
  return result;
}
