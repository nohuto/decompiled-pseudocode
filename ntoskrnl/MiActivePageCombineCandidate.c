/*
 * XREFs of MiActivePageCombineCandidate @ 0x1402296F4
 * Callers:
 *     MiCrcStillIntact @ 0x140210E18 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 * Callees:
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 */

__int64 __fastcall MiActivePageCombineCandidate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 result; // rax

  if ( a4 != (*(_QWORD *)(a3 + 8) | 0x8000000000000000uLL) )
    return 0LL;
  v4 = *(_QWORD *)(a3 + 40);
  if ( v4 < 0 )
    return 0LL;
  if ( (v4 & 0x10000000000LL) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(a3 + 35) & 8) != 0 )
    return 0LL;
  v5 = v4 & 0xFFFFFFFFFFLL;
  if ( v5 == 0x3FFFFFFFFELL )
    return 0LL;
  if ( (MiGetWsleContents(v5, a4 << 25 >> 16) & 0xF) == 8 )
    return 0LL;
  result = 1LL;
  if ( *(_WORD *)(v6 + 32) != 1 )
    return 0LL;
  return result;
}
