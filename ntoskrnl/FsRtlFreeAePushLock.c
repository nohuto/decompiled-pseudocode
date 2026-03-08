/*
 * XREFs of FsRtlFreeAePushLock @ 0x14053AB70
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x1403C9F18 (ExpCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlFreeAePushLock(PVOID P)
{
  ExpCleanupAutoExpandPushLock((__int64)P);
  ExFreePoolWithTag(P, 0);
}
