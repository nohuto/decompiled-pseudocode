/*
 * XREFs of PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140300E30
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1402B146C (PnpDiagnosticTraceObjectWithStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ZwWaitForSingleObject @ 0x140412390 (ZwWaitForSingleObject.c)
 */

__int64 __fastcall PiDrvDbUnloadNodeWaitWorkerCallback(__int64 a1)
{
  NTSTATUS v2; // eax
  struct _KTHREAD *CurrentThread; // rdx
  int v4; // esi

  v2 = ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  v4 = v2;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( !*(_BYTE *)(a1 + 489) )
  {
    *(_BYTE *)(a1 + 489) = 1;
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseUnload_Stop, (unsigned __int16 *)(a1 + 16), v4);
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, (unsigned __int16 *)(a1 + 16), v4);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
