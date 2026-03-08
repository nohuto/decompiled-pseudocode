/*
 * XREFs of RtlpHpVaMgrRangeSplit @ 0x1402F95FC
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x14030424C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x14030BD10 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVaMgrRangeSplit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax

  v3 = a2 + 32 * a3;
  *(_WORD *)(v3 + 24) = *(_WORD *)(a2 + 24) - a3;
  *(_WORD *)(v3 + 26) = a3;
  *(_WORD *)(a2 + 24) = a3;
  v4 = *(unsigned __int16 *)(v3 + 24);
  *(_BYTE *)v3 = *(_BYTE *)v3 & 0xFC | 1;
  v5 = v3 + 32LL * v4;
  *(_OWORD *)(v3 + 8) = *(_OWORD *)(a2 + 8);
  if ( v5 < 32LL * *(unsigned __int16 *)(a1 + 40) + (a2 & ~(32 * (unsigned __int64)*(unsigned __int16 *)(a1 + 40) - 1)) )
    *(_WORD *)(v5 + 26) = v4;
  return v3;
}
