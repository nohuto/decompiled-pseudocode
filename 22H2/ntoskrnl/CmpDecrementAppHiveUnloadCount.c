/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x140360BD0
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x14071B940 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x14071BF04 (CmpCompleteUnloadKey.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1402F4D68 (ExpUnblockPushLock.c)
 */

int CmpDecrementAppHiveUnloadCount()
{
  int result; // eax
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  result = --CmpActiveAppHiveUnloadCount;
  if ( !CmpActiveAppHiveUnloadCount )
  {
    _InterlockedOr(v1, 0);
    if ( CmpActiveAppHiveUnloadEvent )
      return ExpUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL, 0);
  }
  return result;
}
