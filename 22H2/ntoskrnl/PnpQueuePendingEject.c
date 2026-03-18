/*
 * XREFs of PnpQueuePendingEject @ 0x14095930C
 * Callers:
 *     IopEjectDevice @ 0x14096CDC8 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C9A40 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_140C5CC98;
  if ( *(__int64 **)qword_140C5CC98 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140C5CC98 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
