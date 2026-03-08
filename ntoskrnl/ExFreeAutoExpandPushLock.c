/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x1403C9EF0
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x1403C9F18 (ExpCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreeAutoExpandPushLock(PVOID P)
{
  ExpCleanupAutoExpandPushLock();
  ExFreePoolWithTag(P, 0);
}
