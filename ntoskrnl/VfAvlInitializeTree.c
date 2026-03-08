/*
 * XREFs of VfAvlInitializeTree @ 0x1405CF7F0
 * Callers:
 *     ViIovInitialization @ 0x140AD9358 (ViIovInitialization.c)
 *     VfMiscPluginEntry @ 0x140ADD684 (VfMiscPluginEntry.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x140ABA4D4 (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(void *a1, __int64 a2, __int64 a3, RTL_AVL_FREE_ROUTINE *FreeRoutine)
{
  return VfAvlInitializeTreeEx(a1, FreeRoutine);
}
