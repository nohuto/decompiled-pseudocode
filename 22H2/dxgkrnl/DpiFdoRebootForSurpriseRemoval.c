/*
 * XREFs of DpiFdoRebootForSurpriseRemoval @ 0x1C02CBF1C
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0175240 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleDevicePower @ 0x1C0175FC0 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoRebootForSurpriseRemoval(struct _DEVICE_OBJECT *a1, unsigned int a2)
{
  unsigned int *DeviceExtension; // rsi
  unsigned int v3; // edi
  __int64 v4; // rbx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax

  DeviceExtension = (unsigned int *)a1->DeviceExtension;
  v3 = 0;
  byte_1C00B2B1B = 1;
  v4 = a2;
  WorkItem = IoAllocateWorkItem(a1);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, DpiFdoRebootWorkItem, DelayedWorkQueue, (PVOID)(unsigned int)v4);
  }
  else
  {
    v3 = -1073741670;
    v10 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v10);
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v13[3] = 275LL;
    v13[4] = 25LL;
    v13[5] = v4;
    v13[6] = DeviceExtension[281];
    v13[7] = DeviceExtension[282];
    WdLogEvent5_WdCriticalError(v13);
  }
  return v3;
}
