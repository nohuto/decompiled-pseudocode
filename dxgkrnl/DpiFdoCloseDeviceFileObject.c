/*
 * XREFs of DpiFdoCloseDeviceFileObject @ 0x1C03967C8
 * Callers:
 *     DpiFdoDispatchPnp @ 0x1C021AD40 (DpiFdoDispatchPnp.c)
 *     DpiFdoHandleStopDevice @ 0x1C03973C0 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoCloseDeviceFileObject(__int64 a1)
{
  __int64 v1; // rdi
  void *v3; // rcx

  v1 = a1 + 1168;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 1168);
  v3 = *(void **)(a1 + 1232);
  *(_QWORD *)(a1 + 1224) = KeGetCurrentThread();
  if ( v3 )
  {
    ObDereferenceObjectDeferDelete(v3);
    *(_QWORD *)(a1 + 1232) = 0LL;
  }
  *(_QWORD *)(a1 + 1224) = 0LL;
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v1);
}
