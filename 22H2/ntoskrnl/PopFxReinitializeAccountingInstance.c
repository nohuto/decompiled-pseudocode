/*
 * XREFs of PopFxReinitializeAccountingInstance @ 0x140396094
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x140395E40 (PoFxStartDevicePowerManagement.c)
 *     PopFxClearDeviceConstraints @ 0x140589310 (PopFxClearDeviceConstraints.c)
 *     PopFxDisableBasicAccountingWorker @ 0x14058A160 (PopFxDisableBasicAccountingWorker.c)
 *     PopPepInitializeVetoMasks @ 0x14059F354 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x14059FEF4 (PopPepUpdateDripsDeviceVetoMask.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     memset @ 0x140435400 (memset.c)
 */

void __fastcall PopFxReinitializeAccountingInstance(__int64 a1, int a2)
{
  if ( !a2 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  memset((void *)(a1 + 32), 0, 0xC0uLL);
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 == 2 && !_InterlockedExchange(&PopFxBasicAccountingDisabled, 1) )
  {
    PopFxBasicAccountingDisableWorkItem.Parameter = 0LL;
    PopFxBasicAccountingDisableWorkItem.List.Flink = 0LL;
    PopFxBasicAccountingDisableWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopFxDisableBasicAccountingWorker;
    ExQueueWorkItem(&PopFxBasicAccountingDisableWorkItem, DelayedWorkQueue);
  }
}
