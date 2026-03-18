/*
 * XREFs of MiGetAweInfoPartition @ 0x14064A8C8
 * Callers:
 *     MiFreePhysicalPageChain @ 0x14064A1E0 (MiFreePhysicalPageChain.c)
 *     MiGetAweVadPartition @ 0x14064A9D0 (MiGetAweVadPartition.c)
 *     MiAllocateAweInfo @ 0x140A4009C (MiAllocateAweInfo.c)
 *     MiAllocateFastAwePages @ 0x140A40214 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x140A403C8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x140A415B0 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140A417E8 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x140A41B00 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A42390 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return *(_QWORD *)(qword_140C674C8 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(qword_140C674C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
}
