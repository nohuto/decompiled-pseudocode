/*
 * XREFs of ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0185940
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C0185850 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0299024 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C029EEF8 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
        CSERIALIZEDWORKQUEUE ***this,
        void (*a2)(void *),
        void *a3)
{
  unsigned int v3; // edi
  CSERIALIZEDWORKQUEUE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  CSERIALIZEDWORKQUEUE *v12; // rbx
  __int64 v13; // rdx
  CSERIALIZEDWORKQUEUE **v14; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax
  __int64 v22; // rax

  v3 = 0;
  v7 = (CSERIALIZEDWORKQUEUE *)operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v12 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = a2;
    *((_QWORD *)v7 + 3) = a3;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)this);
    v14 = this[6];
    if ( *v14 != (CSERIALIZEDWORKQUEUE *)(this + 5) )
      __fastfail(3u);
    *(_QWORD *)v12 = this + 5;
    *((_QWORD *)v12 + 1) = v14;
    *v14 = v12;
    this[6] = (CSERIALIZEDWORKQUEUE **)v12;
    if ( !*((_BYTE *)this + 56) )
    {
      WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( WorkItem )
      {
        IoQueueWorkItemEx(WorkItem, CSERIALIZEDWORKQUEUE::SerializedQueueWorker, DelayedWorkQueue, this);
      }
      else
      {
        v3 = -1073741801;
        v22 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
        *(_QWORD *)(v22 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v22);
      }
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this, v13);
    return v3;
  }
  else
  {
    v21 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    *(_QWORD *)(v21 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
}
