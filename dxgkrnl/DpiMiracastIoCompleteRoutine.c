__int64 __fastcall DpiMiracastIoCompleteRoutine(__int64 a1, __int64 a2, PVOID *a3)
{
  bool v5; // zf
  struct _IO_WORKITEM *WorkItem; // rax
  int v8; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    v11 = *(_DWORD *)(a2 + 48);
    v10 = *(_DWORD *)(a2 + 56);
    v9 = 0;
    v8 = 0;
    McTemplateK0pqtqq_EtwWriteTransfer(
      a1,
      &EventCompleteMiracastSendUserModeRequest,
      (__int64)a3,
      a3[1],
      v8,
      v9,
      v10,
      v11);
  }
  v5 = *((_DWORD *)a3 + 14) == 0;
  *((_OWORD *)a3 + 1) = *(_OWORD *)(a2 + 48);
  if ( !v5 )
    IoFreeIrp((PIRP)a2);
  if ( a3[4] || a3[6] && a3[3] )
  {
    WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, DpiMiracastIoCompleteWork, DelayedWorkQueue, a3);
    else
      WdLogSingleEntry1(6LL, -1073741801LL);
  }
  else
  {
    ObDereferenceObjectDeferDelete(*a3);
    ExFreePoolWithTag(a3, 0);
  }
  return 3221225494LL;
}
