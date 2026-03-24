/*
 * XREFs of CmpIsThisSameFile @ 0x1406E9C9C
 * Callers:
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086E62C (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

bool __fastcall CmpIsThisSameFile(__int64 a1, void *a2)
{
  bool v2; // bl
  _DMA_OPERATIONS *v4; // r8
  _DMA_OPERATIONS *DmaOperations; // rdx
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  DmaAdapter = 0LL;
  if ( ObReferenceObjectByHandle(a2, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, (PVOID *)&DmaAdapter, 0LL) < 0 )
    return 0;
  v4 = *(_DMA_OPERATIONS **)(a1 + 40);
  if ( v4 )
  {
    DmaOperations = DmaAdapter[2].DmaOperations;
    if ( DmaOperations )
      v2 = v4 == DmaOperations;
  }
  HalPutDmaAdapter(DmaAdapter);
  return v2;
}
