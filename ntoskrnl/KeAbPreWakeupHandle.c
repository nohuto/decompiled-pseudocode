/*
 * XREFs of KeAbPreWakeupHandle @ 0x1402390DC
 * Callers:
 *     ExpWakePushLock @ 0x140238F70 (ExpWakePushLock.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14025D990 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeWakeWaitChain @ 0x14033AF30 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x14033B220 (ExpCommitWakeResourceShared.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14033B5E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x140239F90 (KiAbApplyWakeupBoost.c)
 */

__int64 __fastcall KeAbPreWakeupHandle(__int64 a1, unsigned int a2)
{
  return KiAbApplyWakeupBoost(a2, a1);
}
