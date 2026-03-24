/*
 * XREFs of MiRemoveUserPhysicalPagesView @ 0x1408D649C
 * Callers:
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140234490 (RtlAvlRemoveNode.c)
 *     MiLocatePhysicalViewInTree @ 0x14054CEA8 (MiLocatePhysicalViewInTree.c)
 *     MiLockAweVadsExclusive @ 0x14054CF40 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054DF38 (MiUnlockAweVadsExclusive.c)
 */

unsigned __int64 *__fastcall MiRemoveUserPhysicalPagesView(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 *PhysicalViewInTree; // rbx
  unsigned __int64 *v6; // r11

  if ( (*(_DWORD *)(a1 + 48) & 0x3100000) == 0x2100000 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[8];
  MiLockAweVadsExclusive((__int64)CurrentThread);
  PhysicalViewInTree = MiLocatePhysicalViewInTree(
                         *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
                         (_QWORD *)(v4 + 400));
  RtlAvlRemoveNode(v6, PhysicalViewInTree);
  MiUnlockAweVadsExclusive((__int64)CurrentThread);
  PhysicalViewInTree[2] = 0LL;
  return PhysicalViewInTree;
}
