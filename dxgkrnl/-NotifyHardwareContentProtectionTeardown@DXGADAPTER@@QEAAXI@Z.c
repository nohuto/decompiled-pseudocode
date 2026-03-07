void __fastcall DXGADAPTER::NotifyHardwareContentProtectionTeardown(DXGADAPTER *this, int a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rbx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  KIRQL CurrentIrql; // al
  struct _DEVICE_OBJECT *v10; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  Pool2 = ExAllocatePool2(64LL, 24LL, 1265072196LL);
  v5 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = this;
    *(_DWORD *)(Pool2 + 8) = a2;
    *(_DWORD *)(Pool2 + 12) = PsGetCurrentProcessSessionId();
    v5[2] = *(_QWORD *)((char *)this + 404);
    CurrentIrql = KeGetCurrentIrql();
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
    if ( CurrentIrql >= 2u )
    {
      WorkItem = IoAllocateWorkItem(v10);
      if ( WorkItem )
      {
        WdLogSingleEntry1(4LL, 2438LL);
        IoQueueWorkItemEx(WorkItem, HandleAdapterTeardownEvent, DelayedWorkQueue, v5);
      }
      else
      {
        WdLogSingleEntry1(6LL, 2434LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v13,
            v12,
            v14,
            0,
            1,
            -1,
            (__int64)L"Can't allocate memory to hold IO work item.",
            2434LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    else
    {
      HandleAdapterTeardownEvent(v10, v5, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 2413LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0,
          1,
          -1,
          (__int64)L"Cannot allocate memory for teardown event structure",
          2413LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
