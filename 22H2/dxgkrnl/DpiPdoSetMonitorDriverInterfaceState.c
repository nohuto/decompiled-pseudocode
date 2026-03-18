/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceState @ 0x1C03AA04C
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01EFB34 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C020F55C (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoSetMonitorDriverInterfaceState(PVOID Object, char a2)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rdi
  __int64 *v6; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  v4 = 0;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1953656900LL);
  if ( Pool2 )
  {
    ObfReferenceObject(Object);
    *(_QWORD *)(Pool2 + 16) = Object;
    *(_BYTE *)(Pool2 + 24) = a2;
    KeWaitForSingleObject(&stru_1C0140848, Executive, 0, 0, 0LL);
    v6 = (__int64 *)qword_1C0140888;
    if ( *(__int64 **)qword_1C0140888 != &qword_1C0140880 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &qword_1C0140880;
    *(_QWORD *)(Pool2 + 8) = v6;
    *v6 = Pool2;
    qword_1C0140888 = Pool2;
    if ( !byte_1C0140840 )
    {
      WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( !WorkItem )
      {
        v4 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        byte_1C0140840 = 0;
        goto LABEL_9;
      }
      IoQueueWorkItemEx(WorkItem, DpiPdoSetMonitorDriverInterfaceStateWorker, DelayedWorkQueue, 0LL);
    }
    byte_1C0140840 = 1;
LABEL_9:
    KeReleaseMutex(&stru_1C0140848, 0);
    return v4;
  }
  v4 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  return v4;
}
