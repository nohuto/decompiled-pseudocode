/*
 * XREFs of NtSetEventBoostPriority @ 0x14094F470
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeSetEventBoostPriority @ 0x140518BA0 (KeSetEventBoostPriority.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetEventBoostPriority(HANDLE EventHandle)
{
  int v1; // edi
  struct _DMA_ADAPTER *v2; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  DmaAdapter = 0LL;
  v1 = ObReferenceObjectByHandle(
         EventHandle,
         2u,
         (POBJECT_TYPE)ExEventObjectType,
         KeGetCurrentThread()->PreviousMode,
         (PVOID *)&DmaAdapter,
         0LL);
  if ( v1 >= 0 )
  {
    v2 = DmaAdapter;
    if ( (DmaAdapter->Version & 0x7F) != 0 )
      KeSetEventBoostPriority((__int64)DmaAdapter, 0LL);
    else
      v1 = -1073741788;
    HalPutDmaAdapter(v2);
  }
  return v1;
}
