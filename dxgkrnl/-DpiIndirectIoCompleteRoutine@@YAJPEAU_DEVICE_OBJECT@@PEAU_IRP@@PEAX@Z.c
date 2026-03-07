__int64 __fastcall DpiIndirectIoCompleteRoutine(struct _DEVICE_OBJECT *a1, struct _IRP *a2, char *a3)
{
  bool v3; // zf
  struct _IO_WORKITEM *WorkItem; // rax

  v3 = *((_DWORD *)a3 + 12) == 0;
  *(_OWORD *)(a3 + 8) = *(_OWORD *)&a2->IoStatus.Status;
  if ( !v3 )
    IoFreeIrp(a2);
  if ( *((_QWORD *)a3 + 3) || *((_QWORD *)a3 + 5) && *((_QWORD *)a3 + 2) )
  {
    WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, DpiIndirectIoCompleteWork, DelayedWorkQueue, a3);
    else
      WdLogSingleEntry1(6LL, -1073741801LL);
  }
  else
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)a3);
    ExFreePoolWithTag(a3, 0);
  }
  return 3221225494LL;
}
