/*
 * XREFs of VfAvlInitializeTree @ 0x1405A281C
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C7E70 (VfInitVerifierComponents.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x1409C3634 (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(
        void *a1,
        __int64 a2,
        __int64 a3,
        void (__cdecl *FreeRoutine)(_RTL_AVL_TABLE *, PVOID))
{
  return VfAvlInitializeTreeEx(a1, FreeRoutine);
}
