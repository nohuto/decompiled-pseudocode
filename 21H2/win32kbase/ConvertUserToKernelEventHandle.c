/*
 * XREFs of ConvertUserToKernelEventHandle @ 0x1C0054F50
 * Callers:
 *     ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x1C0054E28 (-InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ConvertUserToKernelEventHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  PVOID v7; // rdi
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v7 = Object;
  v8 = v3;
  if ( v3 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  }
  else
  {
    v8 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, a2);
    if ( v8 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    ObfDereferenceObject(v7);
  }
  return (unsigned int)v8;
}
