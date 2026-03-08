/*
 * XREFs of DpExcludeAdapterAccess @ 0x1C03941A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C01E5204 (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpExcludeAdapterAccess(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3, __int64 a4)
{
  PVOID DeviceExtension; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // r14d
  __int64 v12; // rdx
  struct _IO_WORKITEM *WorkItem; // rbp
  char *Pool2; // rsi
  NTSTATUS v15; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( !DeviceObject || !a3 )
  {
    v10 = 2LL;
    goto LABEL_34;
  }
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension || *((_DWORD *)DeviceExtension + 4) != 1953656900 || *((_DWORD *)DeviceExtension + 5) != 2 )
  {
    v10 = 2LL;
LABEL_34:
    v9 = -1073741811;
LABEL_35:
    v12 = -1073741811LL;
    goto LABEL_36;
  }
  if ( KeGetCurrentIrql() )
  {
    v9 = -1073741811;
    if ( *(_DWORD *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 28LL) >= 0x2003u )
      WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    v10 = 2LL;
    goto LABEL_35;
  }
  if ( ((*((_DWORD *)DeviceExtension + 1000) - 1) & 0xFFFFFFFB) == 0 )
  {
    v12 = -1073741661LL;
    v9 = -1073741661;
    goto LABEL_15;
  }
  v11 = a2 & 2;
  if ( (a2 & 2) != 0 && ((a2 & 1) != 0 || !DxgkIsAdapterCoreSyncAcquired(*((DXGADAPTER **)DeviceExtension + 489), 2)) )
  {
    v9 = -1073741637;
    v12 = -1073741637LL;
LABEL_15:
    v10 = 2LL;
LABEL_36:
    WdLogSingleEntry1(v10, v12);
    return v9;
  }
  if ( (a2 & 4) != 0 && (!*((_QWORD *)DeviceExtension + 365) || !*((_QWORD *)DeviceExtension + 366)) )
  {
    v9 = -1073741637;
    WdLogSingleEntry1(3LL, DeviceExtension);
    return v9;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  if ( !WorkItem )
  {
    v12 = -1073741670LL;
    v9 = -1073741670;
    v10 = 6LL;
    goto LABEL_36;
  }
  Pool2 = (char *)ExAllocatePool2(256LL, 104LL, 1953656900LL);
  if ( !Pool2 )
  {
    v9 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
LABEL_30:
    IoFreeWorkItem(WorkItem);
    return v9;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  *(_QWORD *)Pool2 = a3;
  *((_QWORD *)Pool2 + 1) = a4;
  *((_DWORD *)Pool2 + 4) = a2;
  *((_QWORD *)Pool2 + 3) = (unsigned __int64)&Event & -(__int64)(v11 != 0);
  memset(Pool2 + 32, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)(Pool2 + 40));
  *((_QWORD *)Pool2 + 12) = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)Pool2 + 14) = 13;
  Pool2[80] = -1;
  v15 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, WorkItem, File, 1u, 0x20u);
  v9 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(3LL, v15);
LABEL_29:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_30;
  }
  IoQueueWorkItemEx(WorkItem, DpiFdoExcludeAdapterAccess, DelayedWorkQueue, Pool2);
  if ( v11 )
    v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_29;
  return v9;
}
