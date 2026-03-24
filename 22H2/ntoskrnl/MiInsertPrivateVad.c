/*
 * XREFs of MiInsertPrivateVad @ 0x140297404
 * Callers:
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140683A58 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateEnclaveVad @ 0x1408D1EA8 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiInsertVad @ 0x1402969B0 (MiInsertVad.c)
 */

void __fastcall MiInsertPrivateVad(__int64 a1, __int64 a2)
{
  if ( MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3] == 16 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 424LL);
  MiInsertVad(a1, a2, 1LL, MiVadPageSizes);
}
