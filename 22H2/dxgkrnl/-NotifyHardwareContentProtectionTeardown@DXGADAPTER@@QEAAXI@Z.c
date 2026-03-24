/*
 * XREFs of ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C0037BDC
 * Callers:
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C0042EF0 (DxgkHardwareContentProtectionTeardownCB.c)
 * Callees:
 *     ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C020E020 (-HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 */

void __fastcall DXGADAPTER::NotifyHardwareContentProtectionTeardown(DXGADAPTER *this, int a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  __int64 v10; // rax
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = 2386LL;
LABEL_3:
    WdLogEvent5_WdLowResource(v10);
    return;
  }
  *PoolWithTag = this;
  *((_DWORD *)PoolWithTag + 2) = a2;
  *((_DWORD *)PoolWithTag + 3) = PsGetCurrentProcessSessionId();
  v9[2] = *(_QWORD *)((char *)this + 316);
  v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
  if ( KeGetCurrentIrql() >= 2u )
  {
    WorkItem = IoAllocateWorkItem(v11);
    if ( !WorkItem )
    {
      v10 = WdLogNewEntry5_WdLowResource(v13, v12, v15, v16);
      *(_QWORD *)(v10 + 24) = 2407LL;
      goto LABEL_3;
    }
    v17 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v17 + 24) = 2411LL;
    WdLogEvent5_WdEvent(v17);
    IoQueueWorkItemEx(WorkItem, HandleAdapterTeardownEvent, DelayedWorkQueue, v9);
  }
  else
  {
    HandleAdapterTeardownEvent(v11, v9, 0LL);
  }
}
