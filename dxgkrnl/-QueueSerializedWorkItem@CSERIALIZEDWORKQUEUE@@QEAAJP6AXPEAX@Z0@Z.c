/*
 * XREFs of ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0201C88
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x1C0201D68 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0325D6C (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C03504A0 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

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
