/*
 * XREFs of EtwpQuerySessionDemuxObject @ 0x14093F37C
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpQuerySessionDemuxObject(void *a1, unsigned __int16 *a2)
{
  NTSTATUS v3; // eax
  struct _DMA_ADAPTER *v4; // rcx
  unsigned int v5; // ebx
  unsigned __int16 Size; // ax
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  DmaAdapter = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 0, EtwpSessionDemuxObjectType, 1, (PVOID *)&DmaAdapter, 0LL);
  v4 = DmaAdapter;
  v5 = v3;
  if ( v3 >= 0 )
  {
    Size = DmaAdapter[1].Size;
    if ( Size )
    {
      *a2 = Size;
      v5 = 0;
    }
    else
    {
      v5 = -1073741162;
    }
  }
  if ( v4 )
    HalPutDmaAdapter(v4);
  return v5;
}
