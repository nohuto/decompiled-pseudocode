/*
 * XREFs of ConvertUserToKernelFileHandle @ 0x1C0146030
 * Callers:
 *     PopulateUMKMHandlePair @ 0x1C007F490 (PopulateUMKMHandlePair.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ConvertUserToKernelFileHandle(void *a1, void **a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v5 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0, (POBJECT_TYPE)IoFileObjectType, 0, a2);
    if ( v5 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v5;
}
