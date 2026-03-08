/*
 * XREFs of IsRegistryKeyLocked @ 0x140839204
 * Callers:
 *     NtLockProductActivationKeys @ 0x140838E20 (NtLockProductActivationKeys.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IsRegistryKeyLocked(void *a1, _BYTE *a2)
{
  NTSTATUS v3; // ebx
  PVOID v4; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  *a2 = 0;
  v3 = ObReferenceObjectByHandle(a1, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  if ( v3 >= 0 )
  {
    v4 = Object;
    *a2 = *(_BYTE *)(*((_QWORD *)Object + 1) + 8LL) & 0x80;
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
