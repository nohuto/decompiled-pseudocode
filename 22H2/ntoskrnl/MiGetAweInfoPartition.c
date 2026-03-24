/*
 * XREFs of MiGetAweInfoPartition @ 0x14054C2D4
 * Callers:
 *     MiFreePhysicalPageChain @ 0x14054BB28 (MiFreePhysicalPageChain.c)
 *     MiGetAweVadPartition @ 0x14054C3C0 (MiGetAweVadPartition.c)
 *     MiReleaseVadEventBlocks @ 0x14063AAB0 (MiReleaseVadEventBlocks.c)
 *     MiAllocateAweInfo @ 0x1408D4BD0 (MiAllocateAweInfo.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4D38 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1408D59DC (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x1408D5BF8 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408D5EDC (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6850 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
    return *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(qword_140C4E648 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
}
