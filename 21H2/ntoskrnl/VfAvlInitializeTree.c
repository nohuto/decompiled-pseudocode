/*
 * XREFs of VfAvlInitializeTree @ 0x140601980
 * Callers:
 *     ViIovInitialization @ 0x140A9B2E4 (ViIovInitialization.c)
 *     VfMiscPluginEntry @ 0x140AA4854 (VfMiscPluginEntry.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x140A7C400 (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(void *a1, __int64 a2, __int64 a3, RTL_AVL_FREE_ROUTINE *FreeRoutine)
{
  return VfAvlInitializeTreeEx(a1, FreeRoutine);
}
