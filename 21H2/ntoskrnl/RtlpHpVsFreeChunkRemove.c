/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x1403400D0
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14033F190 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x14033FEF0 (RtlpHpVsChunkCoalesce.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x1403403A0 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  int v7; // eax
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  RtlRbRemoveNode(a1 + 16, a3 + 4, a3, a4);
  v7 = RtlpHpVsChunkComputeCost(a3, a2, &v9, &v10);
  result = v9 + v7 - (unsigned int)(unsigned __int16)((unsigned __int16)a3 ^ RtlpHpHeapGlobals ^ *a3);
  *(_QWORD *)(a1 + 56) -= result;
  return result;
}
