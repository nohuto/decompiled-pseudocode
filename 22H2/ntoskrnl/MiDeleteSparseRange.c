/*
 * XREFs of MiDeleteSparseRange @ 0x140A4318C
 * Callers:
 *     MiDeletePfnBitMaps @ 0x140A43018 (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     MiReturnPfnList @ 0x1403769D4 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x140376A9C (MiReturnSplitPageCharges.c)
 *     MiCaptureSparsePages @ 0x140A42F44 (MiCaptureSparsePages.c)
 */

void __fastcall MiDeleteSparseRange(unsigned __int64 a1, unsigned int a2)
{
  __int64 *PteAddress; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax

  if ( a1 )
  {
    PteAddress = (__int64 *)MiGetPteAddress(a1);
    v5 = MiCaptureSparsePages((unsigned __int64)PteAddress, v4);
    MiReleasePtes((__int64)&qword_140C69A40, PteAddress, a2);
    if ( v5 )
    {
      v6 = MiReturnPfnList(v5);
      MiReturnSplitPageCharges((__int64)MiSystemPartition, v6, 9);
    }
  }
}
