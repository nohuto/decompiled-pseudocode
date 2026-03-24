/*
 * XREFs of PnpQueuePendingEject @ 0x1408A2654
 * Callers:
 *     IopEjectDevice @ 0x1408B2A10 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406B29A0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406B2A34 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_140C44BF8;
  if ( *(__int64 **)qword_140C44BF8 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140C44BF8 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
