/*
 * XREFs of TtmiCreateEventQueue @ 0x1409A901C
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x1409A3450 (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiLogQueueCreated @ 0x1409A5D24 (TtmiLogQueueCreated.c)
 */

__int64 __fastcall TtmiCreateEventQueue(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r9
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // rbx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-60h]
  _QWORD v13[3]; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  __int128 v16; // [rsp+70h] [rbp-10h]
  void *v17; // [rsp+98h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v17 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v15 = 0;
  v13[1] = 0LL;
  v13[2] = 0LL;
  v13[0] = 48LL;
  v14 = 32;
  v16 = 0LL;
  v6 = ObCreateObjectEx(0, TtmpQueueObjectType, (__int64)v13, PreviousMode, v12, 176, 0, 0, &v17, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (char *)v17;
    memset(v17, 0, 0xB0uLL);
    *((_QWORD *)v8 + 20) = v8 + 152;
    *((_QWORD *)v8 + 19) = v8 + 152;
    ExInitializeResourceLite((PERESOURCE)(v8 + 24));
    KeInitializeEvent((PRKEVENT)(v8 + 128), NotificationEvent, 0);
    v8[168] = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v9 = v17;
    *((_QWORD *)v17 + 2) = a1;
    v10 = *(_QWORD **)(a1 + 88);
    if ( *v10 != a1 + 80 )
      __fastfail(3u);
    v9[1] = v10;
    *v9 = a1 + 80;
    *v10 = v9;
    *(_QWORD *)(a1 + 88) = v9;
    TtmiLogQueueCreated((__int64)v9);
    *a2 = v9;
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateEventQueue", 566, v6, v6);
  }
  return v7;
}
