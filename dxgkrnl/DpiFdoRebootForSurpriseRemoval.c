__int64 __fastcall DpiFdoRebootForSurpriseRemoval(struct _DEVICE_OBJECT *a1, unsigned int a2)
{
  unsigned int *DeviceExtension; // rsi
  unsigned int v3; // edi
  __int64 v4; // rbx
  struct _IO_WORKITEM *WorkItem; // rax

  DeviceExtension = (unsigned int *)a1->DeviceExtension;
  v3 = 0;
  byte_1C013B49A = 1;
  v4 = a2;
  WorkItem = IoAllocateWorkItem(a1);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, DpiFdoRebootWorkItem, DelayedWorkQueue, (PVOID)(unsigned int)v4);
  }
  else
  {
    v3 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogSingleEntry5(0LL, 275LL, 25LL, v4, DeviceExtension[281], DeviceExtension[282]);
  }
  return v3;
}
