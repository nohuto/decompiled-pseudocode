/*
 * XREFs of rimConvertUserToKernelSemaphoreHandle @ 0x1C00348B4
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00356F0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimConvertUserToKernelSemaphoreHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  *a2 = 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 0x1F0003u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 984LL);
  }
  else
  {
    v5 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExSemaphoreObjectType, 0, a2);
    if ( v5 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 996LL);
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v5;
}
