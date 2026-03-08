/*
 * XREFs of PiCMDuplicateRegistryHandle @ 0x14076CC0C
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x14067E994 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x14076C7C4 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x14085C868 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x14086B97C (PiCMOpenObjectKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall PiCMDuplicateRegistryHandle(
        void *a1,
        __int64 a2,
        ACCESS_MASK a3,
        KPROCESSOR_MODE a4,
        HANDLE *Handle)
{
  NTSTATUS v7; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
    v7 = ObOpenObjectByPointer(Object, 0x440u, 0LL, a3, (POBJECT_TYPE)CmKeyObjectType, a4, Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
