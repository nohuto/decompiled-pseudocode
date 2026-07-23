/*
 * XREFs of PspMapView @ 0x14058440C
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmMapViewOfSection @ 0x1406A1F20 (MmMapViewOfSection.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall PspMapView(__int64 a1)
{
  KPROCESSOR_MODE v1; // r9
  ACCESS_MASK v2; // edx
  void *v4; // rcx
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v6; // rdi
  int v7; // esi
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_BYTE *)(a1 + 52);
  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(void **)(a1 + 16);
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(v4, v2, MmSectionObjectType, v1, (PVOID *)&DmaAdapter, 0LL);
  if ( result >= 0 )
  {
    v6 = DmaAdapter;
    v7 = MmMapViewOfSection(
           DmaAdapter,
           KeGetCurrentThread()->ApcState.Process,
           a1 + 24,
           0LL,
           0LL,
           a1 + 32,
           a1 + 40,
           1,
           *(_DWORD *)(a1 + 8),
           *(_DWORD *)(a1 + 12));
    if ( v7 < 0 )
      HalPutDmaAdapter(v6);
    else
      *(_QWORD *)(a1 + 16) = v6;
    return v7;
  }
  return result;
}
