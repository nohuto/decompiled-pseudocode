/*
 * XREFs of MiConfirmPageIsZero @ 0x140213880
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 */

_BOOL8 __fastcall MiConfirmPageIsZero(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v1 = MiMapPageInHyperSpaceWorker(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 0LL, 0x80000000LL);
  v3 = (_QWORD *)v1;
  v4 = (_QWORD *)(v1 + 4088);
  do
  {
    if ( *v3 | *v4 )
      break;
    ++v3;
    --v4;
  }
  while ( v3 <= v4 );
  LOBYTE(v2) = 17;
  MiUnmapPageInHyperSpaceWorker(v1, v2, 0x80000000LL);
  return v3 > v4;
}
