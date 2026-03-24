/*
 * XREFs of ObpReleaseLookupContext @ 0x140347AE0
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     ObCloseHandleTableEntry @ 0x140642D80 (ObCloseHandleTableEntry.c)
 *     ObReferenceObjectByName @ 0x1406D9EC0 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406DB6F0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x1406F6EB0 (ObpDeleteNameCheck.c)
 *     ObpCreateSymbolicLinkName @ 0x14070CE9C (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140790780 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A3D968 (ObInitSystem.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObpUnlockDirectory @ 0x140347B1C (ObpUnlockDirectory.c)
 */

void __fastcall ObpReleaseLookupContext(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rcx

  if ( *(_BYTE *)(a1 + 30) )
    ObpUnlockDirectory(*(_QWORD *)a1, a1);
  v2 = *(struct _DMA_ADAPTER **)(a1 + 8);
  if ( v2 )
  {
    HalPutDmaAdapter(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
