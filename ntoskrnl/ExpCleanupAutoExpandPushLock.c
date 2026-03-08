/*
 * XREFs of ExpCleanupAutoExpandPushLock @ 0x1403C9F18
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x1403C9EF0 (ExFreeAutoExpandPushLock.c)
 *     FsRtlFreeAePushLock @ 0x14053AB70 (FsRtlFreeAePushLock.c)
 * Callees:
 *     ExSaFree @ 0x1402956DC (ExSaFree.c)
 */

struct _KTHREAD *__fastcall ExpCleanupAutoExpandPushLock(__int64 a1)
{
  struct _KTHREAD *result; // rax

  result = (struct _KTHREAD *)*(unsigned int *)(a1 + 8);
  if ( ((unsigned __int8)result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8);
  return result;
}
