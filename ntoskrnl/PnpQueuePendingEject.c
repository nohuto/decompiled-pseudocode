/*
 * XREFs of PnpQueuePendingEject @ 0x1409562EC
 * Callers:
 *     IopEjectDevice @ 0x140969DA8 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_140C5C6F8;
  if ( *(__int64 **)qword_140C5C6F8 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140C5C6F8 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
