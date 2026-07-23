/*
 * XREFs of NtDeletePrivateNamespace @ 0x1408DF640
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ObpRemoveNamespaceFromTable @ 0x14068AEEC (ObpRemoveNamespaceFromTable.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140718990 (ObpVerifyCreatorAccessCheck.c)
 */

NTSTATUS __cdecl NtDeletePrivateNamespace(HANDLE NamespaceHandle)
{
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v2; // rbx
  NTSTATUS v3; // edi
  __int64 v4; // rdx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             NamespaceHandle,
             0x10000u,
             ObpDirectoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             (PVOID *)&DmaAdapter,
             &v6);
  if ( result >= 0 )
  {
    v2 = DmaAdapter;
    if ( *(_QWORD *)&DmaAdapter[20].Version )
    {
      v3 = ObpVerifyCreatorAccessCheck(&DmaAdapter[24].DmaOperations);
      if ( v3 >= 0 )
        v3 = ObpRemoveNamespaceFromTable(v2, v4);
    }
    else
    {
      v3 = -1073741816;
    }
    HalPutDmaAdapter(v2);
    return v3;
  }
  return result;
}
