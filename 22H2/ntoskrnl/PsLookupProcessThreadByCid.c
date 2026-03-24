/*
 * XREFs of PsLookupProcessThreadByCid @ 0x1406839D0
 * Callers:
 *     PsOpenThread @ 0x140626120 (PsOpenThread.c)
 *     PsOpenProcess @ 0x1406D34F0 (PsOpenProcess.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     PsLookupThreadByThreadId @ 0x140625A50 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __fastcall PsLookupProcessThreadByCid(__int64 a1, _QWORD *a2, PADAPTER_OBJECT *a3)
{
  NTSTATUS result; // eax
  PADAPTER_OBJECT v7; // rdi
  void *v8; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp+8h] BYREF

  DmaAdapter = 0LL;
  result = PsLookupThreadByThreadId(*(HANDLE *)(a1 + 8), (PETHREAD *)&DmaAdapter);
  if ( result >= 0 )
  {
    v7 = DmaAdapter;
    if ( DmaAdapter[71].DmaOperations == *(_DMA_OPERATIONS **)a1 )
    {
      if ( a2 )
      {
        v8 = *(void **)&DmaAdapter[34].Version;
        ObfReferenceObjectWithTag(v8, 0x746C6644u);
        *a2 = v8;
      }
      *a3 = v7;
      return 0;
    }
    else
    {
      HalPutDmaAdapter(DmaAdapter);
      return -1073741813;
    }
  }
  return result;
}
