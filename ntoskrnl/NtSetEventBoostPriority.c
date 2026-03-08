/*
 * XREFs of NtSetEventBoostPriority @ 0x1409F8B40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeSetEventBoostPriority @ 0x14056F2C0 (KeSetEventBoostPriority.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtSetEventBoostPriority(void *a1)
{
  NTSTATUS v1; // edi
  PVOID v2; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  v1 = ObReferenceObjectByHandle(
         a1,
         2u,
         (POBJECT_TYPE)ExEventObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v1 >= 0 )
  {
    v2 = Object;
    if ( (*(_BYTE *)Object & 0x7F) != 0 )
      KeSetEventBoostPriority((__int64)Object, 0LL);
    else
      v1 = -1073741788;
    ObfDereferenceObject(v2);
  }
  return (unsigned int)v1;
}
