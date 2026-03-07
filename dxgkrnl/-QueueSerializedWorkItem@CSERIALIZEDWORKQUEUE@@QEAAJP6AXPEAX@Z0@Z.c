__int64 __fastcall CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
        CSERIALIZEDWORKQUEUE ***this,
        void (*a2)(void *),
        void *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  CSERIALIZEDWORKQUEUE *v8; // rbx
  CSERIALIZEDWORKQUEUE **v9; // rcx
  struct _IO_WORKITEM *WorkItem; // rax

  v6 = 0;
  v7 = operator new[](0x20uLL, 0x4B677844u, 256LL);
  v8 = (CSERIALIZEDWORKQUEUE *)v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 16) = a2;
    *(_QWORD *)(v7 + 24) = a3;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)this);
    v9 = this[7];
    if ( *v9 != (CSERIALIZEDWORKQUEUE *)(this + 6) )
      __fastfail(3u);
    *(_QWORD *)v8 = this + 6;
    *((_QWORD *)v8 + 1) = v9;
    *v9 = v8;
    this[7] = (CSERIALIZEDWORKQUEUE **)v8;
    if ( !*((_BYTE *)this + 64) )
    {
      WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( WorkItem )
      {
        IoQueueWorkItemEx(WorkItem, CSERIALIZEDWORKQUEUE::SerializedQueueWorker, DelayedWorkQueue, this);
      }
      else
      {
        v6 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate work item for serialized work queue, returning 0x%I64x.",
          -1073741801LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this);
  }
  else
  {
    v6 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate serialized work item entry, returning 0x%I64x.",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v6;
}
