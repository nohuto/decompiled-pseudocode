/*
 * XREFs of ?DpiIndirectIoCompleteRoutine@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0059230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiIndirectIoCompleteRoutine(struct _DEVICE_OBJECT *a1, struct _IRP *a2, char *a3)
{
  bool v3; // zf
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  v3 = *((_DWORD *)a3 + 12) == 0;
  *(_OWORD *)(a3 + 8) = *(_OWORD *)&a2->IoStatus.Status;
  if ( !v3 )
    IoFreeIrp(a2);
  if ( *((_QWORD *)a3 + 3) || *((_QWORD *)a3 + 5) && *((_QWORD *)a3 + 2) )
  {
    WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
    if ( WorkItem )
    {
      IoQueueWorkItemEx(WorkItem, DpiIndirectIoCompleteWork, DelayedWorkQueue, a3);
    }
    else
    {
      v10 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
      *(_QWORD *)(v10 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v10);
    }
  }
  else
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)a3);
    ExFreePoolWithTag(a3, 0);
  }
  return 3221225494LL;
}
