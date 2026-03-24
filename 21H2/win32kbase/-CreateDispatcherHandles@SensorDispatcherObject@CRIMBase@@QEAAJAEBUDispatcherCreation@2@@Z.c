/*
 * XREFs of ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C00881EC
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0088068 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     ProtectHandle @ 0x1C0024ACC (ProtectHandle.c)
 *     ?CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ @ 0x1C008838C (-CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C00A1E1C (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
        CRIMBase::SensorDispatcherObject *this,
        const struct CRIMBase::DispatcherCreation *a2)
{
  int v3; // ecx
  void **v5; // r14
  NTSTATUS Event; // eax
  NTSTATUS v7; // edi
  POBJECT_TYPE *v8; // rcx
  struct _OBJECT_TYPE *v9; // r12
  void *v10; // rcx
  int v11; // edx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 5) = v3;
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  if ( v3 == 1 )
  {
    v5 = (void **)((char *)this + 24);
    Event = ZwCreateEvent((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  }
  else
  {
    if ( v3 != 2 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 646LL);
    }
    v5 = (void **)((char *)this + 24);
    Event = ZwCreateTimer((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationTimer);
  }
  v7 = Event;
  if ( Event < 0 )
    goto LABEL_21;
  v8 = (POBJECT_TYPE *)ExTimerObjectType;
  if ( *((_DWORD *)this + 5) == 1 )
    v8 = ExEventObjectType;
  v9 = *v8;
  v10 = *v5;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(v10, 0x1F0003u, v9, 1, &Object, 0LL);
  v11 = 2;
  *((_QWORD *)this + 6) = Object;
  if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
  {
    if ( *((_DWORD *)this + 5) != 1 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 667LL);
    }
    ProtectHandle(*v5, v11, v9, 1);
    *((_BYTE *)this + 32) = 1;
  }
  if ( v7 < 0 )
    goto LABEL_21;
  v7 = ObOpenObjectByPointer(*((PVOID *)this + 6), 0x200u, 0LL, 0x1F0003u, v9, 0, (PHANDLE)this + 5);
  if ( v7 < 0 )
    goto LABEL_21;
  if ( (*((_DWORD *)a2 + 2) & 1) != 0 )
  {
    if ( CRIMBase::SensorDispatcherObject::MarshalingCompletion::CreateMarshalingEvent((CRIMBase::SensorDispatcherObject *)((char *)this + 56)) )
      return 0;
    v7 = -1073741823;
  }
  if ( v7 < 0 )
LABEL_21:
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(this);
  return (unsigned int)v7;
}
