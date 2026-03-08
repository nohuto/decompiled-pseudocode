/*
 * XREFs of MiGetAweInfoPartition @ 0x1406482AC
 * Callers:
 *     MiFreePhysicalPageChain @ 0x140647BC4 (MiFreePhysicalPageChain.c)
 *     MiGetAweVadPartition @ 0x1406483B4 (MiGetAweVadPartition.c)
 *     MiAllocateAweInfo @ 0x140A3D3BC (MiAllocateAweInfo.c)
 *     MiAllocateFastAwePages @ 0x140A3D534 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x140A3E8D0 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140A3EB08 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x140A3EE20 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A3F6B0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(qword_140C67048 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
}
