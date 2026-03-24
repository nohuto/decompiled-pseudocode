/*
 * XREFs of MiConfirmPageIsZero @ 0x1403698E0
 * Callers:
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 */

_BOOL8 __fastcall MiConfirmPageIsZero(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v4 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v5 = MiMapPageInHyperSpaceWorker((v4 >> 63) + v4, 0LL, 0x80000000, a4);
  v7 = (_QWORD *)v5;
  v8 = (_QWORD *)(v5 + 4088);
  do
  {
    if ( *v7 | *v8 )
      break;
    ++v7;
    --v8;
  }
  while ( v7 <= v8 );
  LOBYTE(v6) = 17;
  MiUnmapPageInHyperSpaceWorker(v5, v6, 0x80000000LL);
  return v7 > v8;
}
