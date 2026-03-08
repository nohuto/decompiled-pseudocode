/*
 * XREFs of ?SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C0219060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSERIALIZEDWORKQUEUE::SerializedQueueWorker(
        PVOID IoObject,
        DXGFASTMUTEX *Context,
        PIO_WORKITEM IoWorkItem)
{
  void **v5; // rsi
  void ***v6; // rdi
  void **v7; // rax

  if ( Context )
  {
    DXGFASTMUTEX::Acquire(Context);
    if ( !*((_BYTE *)Context + 64) )
    {
      *((_BYTE *)Context + 64) = 1;
      v5 = (void **)((char *)Context + 48);
      while ( 1 )
      {
        v6 = (void ***)*v5;
        if ( *v5 == v5 )
          break;
        if ( v6[1] != v5 || (v7 = *v6, (*v6)[1] != v6) )
          __fastfail(3u);
        *v5 = v7;
        v7[1] = v5;
        DXGFASTMUTEX::Release((struct _KTHREAD **)Context);
        ((void (__fastcall *)(void **))v6[2])(v6[3]);
        operator delete(v6);
        DXGFASTMUTEX::Acquire(Context);
      }
      *((_BYTE *)Context + 64) = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)Context);
    if ( IoWorkItem )
      IoFreeWorkItem(IoWorkItem);
  }
  else
  {
    WdLogSingleEntry1(2LL, 1656LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified NULL pContext to CSERIALIZEDWORKQUEUE::SerializedQueueWorker.",
      1656LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
