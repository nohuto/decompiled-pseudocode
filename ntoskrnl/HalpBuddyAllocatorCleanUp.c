/*
 * XREFs of HalpBuddyAllocatorCleanUp @ 0x14052FFD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x1405301B8 (HalpBuddyAllocatorDeleteSubtree.c)
 */

__int64 __fastcall HalpBuddyAllocatorCleanUp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  HalpBuddyAllocatorDeleteSubtree(a1, *(_QWORD *)(a1 + 88));
  HalpMmAllocCtxFree(v2, *(_QWORD *)(a1 + 96));
  HalpMmAllocCtxFree(v3, *(_QWORD *)(a1 + 88));
  return HalpMmAllocCtxFree(v4, a1);
}
