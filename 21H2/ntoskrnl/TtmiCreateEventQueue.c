/*
 * XREFs of TtmiCreateEventQueue @ 0x140905598
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x140900C9C (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 *     TtmiLogQueueCreated @ 0x14090343C (TtmiLogQueueCreated.c)
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
  char *v12; // [rsp+20h] [rbp-60h]
  _DWORD v13[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  __int128 v18; // [rsp+70h] [rbp-10h]
  void *v19; // [rsp+98h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v19 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v13[1] = 0;
  v17 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v13[0] = 48;
  v16 = 32;
  v18 = 0LL;
  v6 = ObCreateObjectEx(0, TtmpQueueObjectType, (__int64)v13, PreviousMode, v12, 176, 0, 0, &v19, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (char *)v19;
    memset(v19, 0, 0xB0uLL);
    *((_QWORD *)v8 + 20) = v8 + 152;
    *((_QWORD *)v8 + 19) = v8 + 152;
    ExInitializeResourceLite((PERESOURCE)(v8 + 24));
    KeInitializeEvent((PRKEVENT)(v8 + 128), NotificationEvent, 0);
    v8[168] = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v9 = v19;
    *((_QWORD *)v19 + 2) = a1;
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
    TtmiLogError("TtmiCreateEventQueue", 567, v6, v6);
  }
  return v7;
}
