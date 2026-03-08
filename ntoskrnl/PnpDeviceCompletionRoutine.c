/*
 * XREFs of PnpDeviceCompletionRoutine @ 0x140202690
 * Callers:
 *     <none>
 * Callees:
 *     PnpDeviceCompletionRequestDestroy @ 0x140202754 (PnpDeviceCompletionRequestDestroy.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140202804 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PnpDiagnosticTraceObject @ 0x140202BAC (PnpDiagnosticTraceObject.c)
 *     PnpTraceStartDevice @ 0x1402B1628 (PnpTraceStartDevice.c)
 *     IoFindDeviceThatFailedIrp @ 0x1402FC254 (IoFindDeviceThatFailedIrp.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 */

__int64 __fastcall PnpDeviceCompletionRoutine(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 DeviceThatFailedIrp; // rax

  v3 = 0LL;
  *(_QWORD *)(*(_QWORD *)(a3 + 16) + 72LL) = 0LL;
  if ( a2->PendingReturned )
    *(_DWORD *)(a3 + 36) = 1;
  *(_QWORD *)(a3 + 48) = a2->IoStatus.Information;
  *(_DWORD *)(a3 + 40) = a2->IoStatus.Status;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 56));
  if ( *(int *)(a3 + 40) < 0 )
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a2);
    if ( DeviceThatFailedIrp )
      v3 = *(_QWORD *)(DeviceThatFailedIrp + 8);
  }
  PnpDeviceCompletionQueueDispatchedEntryCompleted(a1, a3);
  if ( *(_DWORD *)(a3 + 32) == 783 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop);
  else
    PnpTraceStartDevice(*(_QWORD *)(a3 + 16), *(unsigned int *)(a3 + 40), v3);
  PnpDeviceCompletionRequestDestroy(a3);
  IoFreeIrp(a2);
  return 3221225494LL;
}
