/*
 * XREFs of sub_140402E8B @ 0x140402E8B
 * Callers:
 *     sub_140402D74 @ 0x140402D74 (sub_140402D74.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_140402E8B()
{
  __int64 v0; // rbp
  int result; // eax

  _mm_lfence();
  result = KeGetPcr()->Prcb.BpbRetpolineState;
  *(_BYTE *)(v0 - 88) = result;
  __writegsbyte(0x856u, KeGetPcr()->Prcb.BpbRetpolineState | 2);
  return result;
}
