/*
 * XREFs of NtDeletePrivateNamespace @ 0x140881680
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140741CB8 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRemoveNamespaceFromTable @ 0x14077B7BC (ObpRemoveNamespaceFromTable.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtDeletePrivateNamespace(void *a1)
{
  NTSTATUS result; // eax
  volatile signed __int32 *v2; // rbx
  int v3; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             0x10000u,
             ObpDirectoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             &v5);
  if ( result >= 0 )
  {
    v2 = (volatile signed __int32 *)Object;
    if ( *((_QWORD *)Object + 40) )
    {
      v3 = ObpVerifyCreatorAccessCheck((__int64)Object + 392);
      if ( v3 >= 0 )
        v3 = ObpRemoveNamespaceFromTable(v2);
    }
    else
    {
      v3 = -1073741816;
    }
    ObfDereferenceObject((PVOID)v2);
    return v3;
  }
  return result;
}
