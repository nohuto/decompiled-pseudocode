/*
 * XREFs of ndisPplLazyInitializeLookaside @ 0x1C0004324
 * Callers:
 *     NdisAllocateNetBufferMdlAndData @ 0x1C0003460 (NdisAllocateNetBufferMdlAndData.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C0003740 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0003C00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C0003F10 (NdisAllocateNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0005400 (NdisFreeNetBufferList.c)
 *     NdisFreeNetBuffer @ 0x1C00083C0 (NdisFreeNetBuffer.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0013450 (NdisFreeCloneNetBufferList.c)
 *     ?ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z @ 0x1C0018154 (-ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPplLazyInitializeLookaside(PLOOKASIDE_LIST_EX Lookaside, __int64 a2)
{
  KSPIN_LOCK *p_Depth; // rdi
  KIRQL v5; // bp

  p_Depth = (KSPIN_LOCK *)&Lookaside[2].L.Depth;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Lookaside[2].L.Depth);
  if ( !LOBYTE(Lookaside[2].L.AllocateMisses) )
  {
    ExInitializeLookasideListEx(
      Lookaside,
      ndisAllocateFromNPagedPool,
      *(PFREE_FUNCTION_EX *)(a2 + 56),
      NonPagedPoolNx,
      0,
      *(unsigned int *)(a2 + 44),
      *(_DWORD *)(a2 + 40),
      0x400u);
    LOBYTE(Lookaside[2].L.AllocateMisses) = 1;
  }
  KeReleaseSpinLock(p_Depth, v5);
}
