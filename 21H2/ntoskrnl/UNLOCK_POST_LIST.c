/*
 * XREFs of UNLOCK_POST_LIST @ 0x140666378
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x140663230 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140206970 (ExReleaseFastMutexUnsafe.c)
 */

void UNLOCK_POST_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpPostLock);
}
