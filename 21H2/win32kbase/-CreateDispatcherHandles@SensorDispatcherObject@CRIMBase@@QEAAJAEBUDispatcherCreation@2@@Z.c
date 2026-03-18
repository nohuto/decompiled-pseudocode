/*
 * XREFs of ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C005DD08
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C005DB90 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     ProtectHandle @ 0x1C003AA94 (ProtectHandle.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C004A9C0 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     CreateKernelEventObject @ 0x1C005DED8 (CreateKernelEventObject.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
        CRIMBase::SensorDispatcherObject *this,
        const struct CRIMBase::DispatcherCreation *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  void **v6; // rsi
  NTSTATUS Event; // eax
  NTSTATUS v8; // edi
  int v9; // edx
  POBJECT_TYPE *v10; // rcx
  struct _OBJECT_TYPE *v11; // rbp
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 KernelEventObject; // rax
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v5 = *((unsigned int *)a2 + 1);
  *((_DWORD *)this + 5) = v5;
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  if ( (_DWORD)v5 == 1 )
  {
    v6 = (void **)((char *)this + 24);
    Event = ZwCreateEvent((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  }
  else if ( (_DWORD)v5 == 2 )
  {
    v6 = (void **)((char *)this + 24);
    Event = ZwCreateTimer((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationTimer);
  }
  else
  {
    if ( (_DWORD)v5 != 3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
    v6 = (void **)((char *)this + 24);
    Event = ZwCreateSemaphore((PHANDLE)this + 3, 0x1F0003u, 0LL, 0, 0x7FFFFFFF);
  }
  v8 = Event;
  if ( Event < 0 )
    goto LABEL_25;
  v9 = *((_DWORD *)this + 5);
  if ( v9 == 1 )
  {
    v10 = ExEventObjectType;
  }
  else
  {
    v10 = ExSemaphoreObjectType;
    if ( v9 == 2 )
      v10 = (POBJECT_TYPE *)ExTimerObjectType;
  }
  v11 = *v10;
  v12 = *v6;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(v12, 0x1F0003u, v11, 1, &Object, 0LL);
  *((_QWORD *)this + 6) = Object;
  if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
  {
    if ( *((_DWORD *)this + 5) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    ProtectHandle(*v6, v13, v11, 1);
    *((_BYTE *)this + 32) = 1;
  }
  if ( v8 < 0 )
    goto LABEL_25;
  v8 = ObOpenObjectByPointer(*((PVOID *)this + 6), 0x200u, 0LL, 0x1F0003u, v11, 0, (PHANDLE)this + 5);
  if ( v8 < 0 )
    goto LABEL_25;
  if ( (*((_DWORD *)a2 + 2) & 1) != 0 )
  {
    KernelEventObject = CreateKernelEventObject(v16, 0LL);
    *((_QWORD *)this + 7) = KernelEventObject;
    if ( KernelEventObject )
      return 0;
    v8 = -1073741823;
LABEL_25:
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(this);
  }
  return (unsigned int)v8;
}
