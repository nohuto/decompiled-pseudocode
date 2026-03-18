/*
 * XREFs of sub_140423E3B @ 0x140423E3B
 * Callers:
 *     sub_140423D24 @ 0x140423D24 (sub_140423D24.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_140423E3B()
{
  __int64 v0; // rbp
  int result; // eax

  _RAX = 56026LL;
  if ( (KeGetPcr()->Prcb.BpbFeatures & 8) != 0 )
  {
    LOBYTE(_RAX) = 32;
    __asm { incsspq rax }
  }
  _mm_lfence();
  result = KeGetPcr()->Prcb.BpbRetpolineState;
  *(_BYTE *)(v0 - 88) = result;
  __writegsbyte(0x856u, KeGetPcr()->Prcb.BpbRetpolineState | 2);
  return result;
}
