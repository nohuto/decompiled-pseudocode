/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x1406A04A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AlpcDeleteBlobByHandle @ 0x1406A0400 (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x1406A293C (AlpcpRemoveResourcePort.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407CBD44 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407CDB50 (AlpcpUnlockBlob.c)
 */

char __fastcall AlpcSectionDeleteProcedure(_QWORD *BugCheckParameter2)
{
  _QWORD *v2; // rcx
  char result; // al
  void *v4; // rdi

  v2 = (_QWORD *)BugCheckParameter2[2];
  if ( v2 )
  {
    result = AlpcDeleteBlobByHandle(v2, BugCheckParameter2[3], (__int64)BugCheckParameter2);
    BugCheckParameter2[2] = 0LL;
  }
  v4 = (void *)BugCheckParameter2[5];
  if ( v4 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2);
    AlpcpRemoveResourcePort(v4, BugCheckParameter2);
    BugCheckParameter2[5] = 0LL;
    AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2);
    return ObfDereferenceObject(v4);
  }
  return result;
}
