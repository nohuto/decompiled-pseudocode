/*
 * XREFs of ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C0032254
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C00320D4 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C003168C (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     CreateKernelEventObject @ 0x1C0032430 (CreateKernelEventObject.c)
 *     ProtectHandle @ 0x1C00945DC (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
        CRIMBase::SensorDispatcherObject *this,
        const struct CRIMBase::DispatcherCreation *a2)
{
  int v3; // ecx
  NTSTATUS Event; // eax
  NTSTATUS v6; // edi
  int v7; // eax
  POBJECT_TYPE *v8; // rax
  struct _OBJECT_TYPE *v9; // rsi
  void *v10; // rcx
  struct _OBJECT_TYPE *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  bool v16; // zf
  __int64 KernelEventObject; // rax
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 5) = v3;
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  if ( v3 == 1 )
  {
    Event = ZwCreateEvent((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  }
  else if ( v3 == 2 )
  {
    Event = ZwCreateTimer((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationTimer);
  }
  else
  {
    if ( v3 != 3 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 630LL);
    }
    Event = ZwCreateSemaphore((PHANDLE)this + 3, 0x1F0003u, 0LL, 0, 0x7FFFFFFF);
  }
  v6 = Event;
  if ( Event < 0 )
    goto LABEL_24;
  v7 = *((_DWORD *)this + 5);
  if ( v7 == 1 )
  {
    v8 = ExEventObjectType;
  }
  else
  {
    v16 = v7 == 2;
    v8 = (POBJECT_TYPE *)ExTimerObjectType;
    if ( !v16 )
      v8 = ExSemaphoreObjectType;
  }
  v9 = *v8;
  v10 = (void *)*((_QWORD *)this + 3);
  v11 = *v8;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(v10, 0x1F0003u, v11, 1, &Object, 0LL);
  *((_QWORD *)this + 6) = Object;
  if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
  {
    if ( *((_DWORD *)this + 5) != 1 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 652LL);
    }
    LOBYTE(v13) = 1;
    ProtectHandle(*((_QWORD *)this + 3), v12, v9, v13);
    *((_BYTE *)this + 32) = 1;
  }
  if ( v6 < 0 )
    goto LABEL_24;
  v6 = ObOpenObjectByPointer(*((PVOID *)this + 6), 0x200u, 0LL, 0x1F0003u, v9, 0, (PHANDLE)this + 5);
  if ( v6 < 0 )
    goto LABEL_24;
  if ( (*((_DWORD *)a2 + 2) & 1) != 0 )
  {
    KernelEventObject = CreateKernelEventObject(v14, 0LL);
    *((_QWORD *)this + 7) = KernelEventObject;
    if ( KernelEventObject )
      return 0;
    v6 = -1073741823;
LABEL_24:
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles((HANDLE *)this);
  }
  return (unsigned int)v6;
}
