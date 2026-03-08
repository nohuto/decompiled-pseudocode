/*
 * XREFs of ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01EBEEC
 * Callers:
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01ECE40 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SwapRect(struct tagRECT *a1, struct tagRECT *a2)
{
  signed __int64 v2; // rcx
  __int64 v3; // r9
  LONG v4; // r8d

  v2 = (char *)a1 - (char *)a2;
  v3 = 4LL;
  do
  {
    v4 = *(LONG *)((char *)&a2->left + v2);
    *(LONG *)((char *)&a2->left + v2) = a2->left;
    a2->left = v4;
    a2 = (struct tagRECT *)((char *)a2 + 4);
    --v3;
  }
  while ( v3 );
}
