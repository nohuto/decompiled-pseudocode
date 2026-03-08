/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x1402BFE38
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x14074A6B0 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1402BFD34 (ExpUnblockPushLock.c)
 */

void CmpDecrementAppHiveUnloadCount()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !--CmpActiveAppHiveUnloadCount )
  {
    _InterlockedOr(v0, 0);
    if ( CmpActiveAppHiveUnloadEvent )
      ExpUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL, 0);
  }
}
