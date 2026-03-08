/*
 * XREFs of MiDeleteCachedKernelShadowStack @ 0x140641F64
 * Callers:
 *     MiAdjustCachedStacks @ 0x1402364D4 (MiAdjustCachedStacks.c)
 *     MiPruneCachedStackList @ 0x140236C6C (MiPruneCachedStackList.c)
 *     MiEmptyKernelStackCache @ 0x1406423A0 (MiEmptyKernelStackCache.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406429F8 (MiRemoveNonIdealCachedStacks.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 */

PSLIST_ENTRY __fastcall MiDeleteCachedKernelShadowStack(union _SLIST_HEADER *a1, struct _SLIST_ENTRY *a2, int a3)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)MiDeleteKernelShadowStack((((unsigned __int64)a2[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
  if ( a3 )
    return RtlpInterlockedPushEntrySList(a1 + 29, a2);
  return result;
}
