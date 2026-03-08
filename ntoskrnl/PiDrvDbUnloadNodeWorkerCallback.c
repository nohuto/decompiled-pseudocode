/*
 * XREFs of PiDrvDbUnloadNodeWorkerCallback @ 0x140799960
 * Callers:
 *     <none>
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x140202BAC (PnpDiagnosticTraceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PiDrvDbUnloadNodeReset @ 0x140300534 (PiDrvDbUnloadNodeReset.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 */

char __fastcall PiDrvDbUnloadNodeWorkerCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx

  PiDrvDbUnloadNodeReset(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_BYTE *)(a1 + 488) )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseUnload_Start, (unsigned __int16 *)(a1 + 16));
    v3 = *(void **)(a1 + 72);
    if ( v3 )
    {
      ZwClose(v3);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    *(_WORD *)(a1 + 488) = 0;
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseUnload_Pend, (unsigned __int16 *)(a1 + 16));
    *(_QWORD *)(a1 + 440) = 0LL;
    *(_QWORD *)(a1 + 456) = PiDrvDbUnloadNodeWaitWorkerCallback;
    *(_QWORD *)(a1 + 464) = a1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 440), DelayedWorkQueue);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
