/*
 * XREFs of RtlpHpVaMgrRangeCoalesce @ 0x1402A516C
 * Callers:
 *     RtlpHpVaMgrFree @ 0x1402A50D4 (RtlpHpVaMgrFree.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeCoalesce(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int16 v6; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int16 v11; // cx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax

  v4 = *(unsigned __int16 *)(a1 + 40);
  *(_BYTE *)a2 &= ~1u;
  v5 = a2;
  v6 = *(_WORD *)(a2 + 24);
  v8 = 32 * v4 + (a2 & (-32 * v4));
  v9 = 32LL * *(unsigned __int16 *)(a2 + 26);
  v10 = a2 - v9;
  if ( a2 >= v9 && (*(_BYTE *)v10 & 1) == 0 )
  {
    RtlRbRemoveNode(a1 + 8, a2 - v9, a3, a4);
    *(_WORD *)(v10 + 24) += *(_WORD *)(v5 + 24);
    *(_OWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_BYTE *)v5 = 2;
    *(_BYTE *)(v5 + 1) = *(_BYTE *)(a1 + 44);
    *(_QWORD *)(v5 + 24) = 2309737967LL;
    v5 = v10;
  }
  v11 = *(_WORD *)(v5 + 24);
  v12 = v5 + 32LL * v11;
  if ( v12 < v8 && (*(_BYTE *)v12 & 1) == 0 )
  {
    RtlRbRemoveNode(a1 + 8, v5 + 32LL * *(unsigned __int16 *)(v5 + 24), a3, a4);
    *(_WORD *)(v5 + 24) += *(_WORD *)(v12 + 24);
    *(_OWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_BYTE *)v12 = 2;
    *(_BYTE *)(v12 + 1) = *(_BYTE *)(a1 + 44);
    *(_QWORD *)(v12 + 24) = 2309737967LL;
    v11 = *(_WORD *)(v5 + 24);
  }
  v13 = v5 + 32LL * v11;
  if ( v11 > v6 && v13 < v8 )
    *(_WORD *)(v13 + 26) = v11;
  return v5;
}
