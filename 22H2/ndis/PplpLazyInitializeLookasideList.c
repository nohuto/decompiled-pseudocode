/*
 * XREFs of PplpLazyInitializeLookasideList @ 0x1C0039220
 * Callers:
 *     NdisMAllocateNetBufferSGList @ 0x1C0004CF0 (NdisMAllocateNetBufferSGList.c)
 *     NdisMFreeNetBufferSGList @ 0x1C0005FF0 (NdisMFreeNetBufferSGList.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0063A20 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0063E8C (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0064434 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpLazyInitializeLookasideList(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  if ( !*(_BYTE *)(a2 + 112) )
  {
    ExInitializeLookasideListEx(
      (PLOOKASIDE_LIST_EX)a2,
      (PALLOCATE_FUNCTION_EX)PplGenericAllocateFunction,
      (PFREE_FUNCTION_EX)PplGenericFreeFunction,
      *(POOL_TYPE *)(a1 + 24),
      *(_DWORD *)(a1 + 4),
      *(_QWORD *)(a1 + 16),
      *(_DWORD *)(a1 + 8),
      *(_WORD *)(a1 + 28));
    *(_BYTE *)(a2 + 112) = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 104), v4);
}
