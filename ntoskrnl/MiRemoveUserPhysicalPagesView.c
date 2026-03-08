/*
 * XREFs of MiRemoveUserPhysicalPagesView @ 0x140A3F408
 * Callers:
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     MiLocatePhysicalViewInTree @ 0x1406489F4 (MiLocatePhysicalViewInTree.c)
 *     MiLockAweVadsExclusive @ 0x140648A8C (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1406498DC (MiUnlockAweVadsExclusive.c)
 */

unsigned __int64 *__fastcall MiRemoveUserPhysicalPagesView(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 *PhysicalViewInTree; // rbx
  unsigned __int64 *v6; // r11

  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) == 0x4200000 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = CurrentThread->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
  MiLockAweVadsExclusive((__int64)CurrentThread);
  PhysicalViewInTree = MiLocatePhysicalViewInTree(
                         *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
                         (_QWORD *)(v4 + 384));
  RtlAvlRemoveNode(v6, PhysicalViewInTree);
  MiUnlockAweVadsExclusive((__int64)CurrentThread);
  PhysicalViewInTree[2] = 0LL;
  return PhysicalViewInTree;
}
