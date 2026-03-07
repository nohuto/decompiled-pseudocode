__int64 __fastcall TtmpDispatchGetTerminalEvent(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v5; // eax
  PVOID v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  int EventFromQueue; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(void **)(a1 + 8);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v3, 0xF0000u, TtmpQueueObjectType, PreviousMode, &Object, 0LL);
  v6 = Object;
  v7 = v5;
  if ( v5 < 0 )
  {
    TtmiLogError("TtmiReferenceQueueByHandle", 310LL, (unsigned int)v5, (unsigned int)v5);
    v8 = v7;
    v9 = v7;
    v10 = 410LL;
LABEL_3:
    TtmiLogError("TtmpDispatchGetTerminalEvent", v10, v9, v8);
    goto LABEL_7;
  }
  EventFromQueue = TtmiRetrieveEventFromQueue(Object, a2);
  v7 = EventFromQueue;
  if ( EventFromQueue < 0 )
  {
    v8 = (unsigned int)EventFromQueue;
    v9 = (unsigned int)EventFromQueue;
    v10 = 418LL;
    goto LABEL_3;
  }
  v7 = 0;
LABEL_7:
  if ( v6 )
    ObfDereferenceObject(v6);
  return v7;
}
