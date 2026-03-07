__int64 __fastcall DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(
        DXGADAPTER *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  UINT NumInvalidMemoryRanges; // eax
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  char *Pool2; // rdi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  struct _IO_WORKITEM *WorkItem; // rbp
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  DXGK_MEMORYRANGE *pMemoryRanges; // rcx
  __int64 v18; // rax

  NumInvalidMemoryRanges = a2->NumInvalidMemoryRanges;
  v5 = 0;
  if ( NumInvalidMemoryRanges == 1 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 40LL, 1265072196LL);
    if ( Pool2 )
    {
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 27));
      if ( WorkItem )
      {
        pMemoryRanges = a2->pMemoryRanges;
        v18 = *(_QWORD *)((char *)this + 404);
        *(struct _DXGK_QUERYSEGMENTMEMORYSTATE *)(Pool2 + 8) = *a2;
        *((_QWORD *)Pool2 + 2) = Pool2 + 24;
        *(_QWORD *)Pool2 = v18;
        *(DXGK_MEMORYRANGE *)(Pool2 + 24) = *pMemoryRanges;
        WdLogSingleEntry1(4LL, 2642LL);
        IoQueueWorkItemEx(WorkItem, HandleUnblockUEFIFrameBufferRanges, DelayedWorkQueue, Pool2);
      }
      else
      {
        v5 = -1073741670;
        WdLogSingleEntry1(6LL, 2633LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v15,
            v14,
            v16,
            0,
            1,
            -1,
            (__int64)L"Can't allocate memory to hold IO work item.",
            2633LL,
            0LL,
            0LL,
            0LL,
            0LL);
        ExFreePoolWithTag(Pool2, 0);
      }
    }
    else
    {
      v5 = -1073741670;
      WdLogSingleEntry1(6LL, 2625LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
          0,
          1,
          -1,
          (__int64)L"Can't allocate memory to hold IO work item data.",
          2625LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  else
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, NumInvalidMemoryRanges);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v7,
        v6,
        v8,
        0,
        0,
        -1,
        (__int64)L"UnblockUEFIFrameBufferRanges: NumUEFIFrameBufferRanges must be 1, but 0x%08X",
        a2->NumInvalidMemoryRanges,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return v5;
}
