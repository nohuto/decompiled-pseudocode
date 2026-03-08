/*
 * XREFs of AlpcSecurityDestroyProcedure @ 0x1406D4580
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     AlpcDeleteBlobByHandle @ 0x1406A0400 (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x1406A293C (AlpcpRemoveResourcePort.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406D453C (AlpcpReleasePagedPoolQuota.c)
 *     SeDeleteClientSecurity @ 0x1406D4FF0 (SeDeleteClientSecurity.c)
 */

__int64 __fastcall AlpcSecurityDestroyProcedure(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
    AlpcDeleteBlobByHandle(v2, *(_QWORD *)(a1 + 8), a1);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    AlpcpRemoveResourcePort(v3, a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    SeDeleteClientSecurity(a1 + 32);
    AlpcpReleasePagedPoolQuota(*(struct _KPROCESS **)(a1 + 16), 0xA0uLL);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x63706C41u);
  }
  return 0LL;
}
