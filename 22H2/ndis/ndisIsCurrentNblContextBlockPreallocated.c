/*
 * XREFs of ndisIsCurrentNblContextBlockPreallocated @ 0x1C00AD1D8
 * Callers:
 *     NdisAllocateNetBufferListContext @ 0x1C00AD270 (NdisAllocateNetBufferListContext.c)
 *     NdisFreeNetBufferListContext @ 0x1C00AD830 (NdisFreeNetBufferListContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCurrentNblContextBlockPreallocated(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL);
  return (v1 & 2) != 0 && *(_QWORD *)(a1 + 16) == a1 + ((v1 & 1) != 0 ? 560LL : 384LL);
}
