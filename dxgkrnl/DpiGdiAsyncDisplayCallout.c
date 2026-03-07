__int64 __fastcall DpiGdiAsyncDisplayCallout(__int64 a1)
{
  unsigned int v2; // ebx
  struct _IO_WORKITEM *WorkItem; // rdi
  _BYTE *Pool2; // rax

  v2 = 0;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( !WorkItem )
    goto LABEL_6;
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, 16LL, 1953656900LL);
  if ( !Pool2 )
  {
    IoFreeWorkItem(WorkItem);
LABEL_6:
    v2 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    return v2;
  }
  *(_QWORD *)Pool2 = a1;
  Pool2[8] = 1;
  IoQueueWorkItemEx(WorkItem, DpiGdiHandleAsyncDisplayCallout, DelayedWorkQueue, Pool2);
  return v2;
}
