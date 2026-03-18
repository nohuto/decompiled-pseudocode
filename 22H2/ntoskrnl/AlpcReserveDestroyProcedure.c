/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x1407E34F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     AlpcpUnlockMessage @ 0x14071BF28 (AlpcpUnlockMessage.c)
 *     AlpcDeleteBlobByHandle @ 0x14071C2F4 (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x14071ECD0 (AlpcpRemoveResourcePort.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14073A344 (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(__int64 *a1)
{
  ULONG_PTR v1; // rdi
  _QWORD *v3; // rcx

  v1 = a1[3];
  if ( v1 )
  {
    AlpcpLockForCachedReferenceBlob(a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v1);
  }
  v3 = (_QWORD *)a1[1];
  if ( v3 )
    AlpcDeleteBlobByHandle(v3, a1[2], (__int64)a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, (__int64)a1);
    ObfDereferenceObject((PVOID)*a1);
  }
  return 0LL;
}
