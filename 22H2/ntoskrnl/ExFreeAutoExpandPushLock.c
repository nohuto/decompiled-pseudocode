/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x140391E00
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     ExCleanupAutoExpandPushLock @ 0x1402E9ED0 (ExCleanupAutoExpandPushLock.c)
 */

PSLIST_ENTRY __fastcall ExFreeAutoExpandPushLock(ULONG_PTR BugCheckParameter2)
{
  ExCleanupAutoExpandPushLock(BugCheckParameter2);
  return ExFreeHeapPool(BugCheckParameter2);
}
