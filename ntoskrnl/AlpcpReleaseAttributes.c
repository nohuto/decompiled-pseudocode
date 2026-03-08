/*
 * XREFs of AlpcpReleaseAttributes @ 0x1407CA744
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 *     AlpcMessageCleanupProcedure @ 0x1407CA690 (AlpcMessageCleanupProcedure.c)
 *     AlpcpCaptureAttributes @ 0x1407CAAD0 (AlpcpCaptureAttributes.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x14078CD78 (AlpcpReleaseViewAttribute.c)
 */

unsigned __int64 __fastcall AlpcpReleaseAttributes(_QWORD *a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax

  v2 = a1[4];
  if ( v2 )
  {
    result = AlpcpDereferenceBlobEx(v2, 1);
    a1[4] = 0LL;
  }
  v3 = a1[5];
  if ( v3 )
  {
    result = AlpcpReleaseViewAttribute(v3, 0);
    a1[5] = 0LL;
  }
  v4 = a1[6];
  if ( v4 )
  {
    result = AlpcpDereferenceBlobEx(v4, 1);
    a1[6] = 0LL;
  }
  v5 = a1[7];
  if ( (v5 & 1) != 0 )
  {
    if ( v5 >= 4 && (v5 & 2) != 0 )
      result = ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
    a1[7] = 0LL;
  }
  return result;
}
