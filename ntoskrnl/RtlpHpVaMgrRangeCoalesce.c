/*
 * XREFs of RtlpHpVaMgrRangeCoalesce @ 0x1402F136C
 * Callers:
 *     RtlpHpVaMgrFree @ 0x1402F12D4 (RtlpHpVaMgrFree.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeCoalesce(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int16 v4; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int16 v10; // cx
  unsigned __int64 v11; // rax

  v2 = *(unsigned __int16 *)(a1 + 40);
  *(_BYTE *)a2 &= ~1u;
  v3 = a2;
  v4 = *(_WORD *)(a2 + 24);
  v6 = 32 * v2 + (a2 & (-32 * v2));
  v7 = 32LL * *(unsigned __int16 *)(a2 + 26);
  v8 = a2 - v7;
  if ( a2 >= v7 && (*(_BYTE *)v8 & 1) == 0 )
  {
    RtlRbRemoveNode((unsigned __int64 *)(a1 + 8), a2 - v7);
    *(_WORD *)(v8 + 24) += *(_WORD *)(v3 + 24);
    *(_OWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_BYTE *)v3 = 2;
    *(_BYTE *)(v3 + 1) = *(_BYTE *)(a1 + 44);
    *(_QWORD *)(v3 + 24) = 2309737967LL;
    v3 = v8;
  }
  v9 = v3 + 32LL * *(unsigned __int16 *)(v3 + 24);
  if ( v9 < v6 && (*(_BYTE *)v9 & 1) == 0 )
  {
    RtlRbRemoveNode((unsigned __int64 *)(a1 + 8), v3 + 32LL * *(unsigned __int16 *)(v3 + 24));
    *(_WORD *)(v3 + 24) += *(_WORD *)(v9 + 24);
    *(_OWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_BYTE *)v9 = 2;
    *(_BYTE *)(v9 + 1) = *(_BYTE *)(a1 + 44);
    *(_QWORD *)(v9 + 24) = 2309737967LL;
  }
  v10 = *(_WORD *)(v3 + 24);
  v11 = v3 + 32LL * v10;
  if ( v10 > v4 && v11 < v6 )
    *(_WORD *)(v11 + 26) = v10;
  return v3;
}
