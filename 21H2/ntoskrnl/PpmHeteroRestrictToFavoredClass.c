/*
 * XREFs of PpmHeteroRestrictToFavoredClass @ 0x140578528
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14057D32C (PpmParkComputeUnparkMask.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 */

__int64 __fastcall PpmHeteroRestrictToFavoredClass(unsigned __int64 a1, unsigned __int16 a2)
{
  unsigned __int8 v2; // si
  int v3; // r14d
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 i; // r15
  unsigned __int64 v7; // rax
  __int64 Prcb; // rdx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx

  v2 = 0;
  v3 = a2;
  v4 = 0LL;
  v5 = a1;
  for ( i = a1; i; i &= ~*(_QWORD *)(Prcb + 200) )
  {
    _BitScanForward64(&v7, i);
    Prcb = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * v3 + (v7 & 0x3F)]);
    v9 = v2;
    if ( v2 <= *(_BYTE *)(Prcb + 33209) )
      v9 = *(_BYTE *)(Prcb + 33209);
    v2 = v9;
  }
  for ( ; v5; v5 &= ~v12 )
  {
    _BitScanForward64(&v10, v5);
    v11 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * v3 + (v10 & 0x3F)]);
    v12 = *(_QWORD *)(v11 + 200);
    if ( *(_BYTE *)(v11 + 33209) == v2 )
      v4 |= v12;
  }
  return v4;
}
