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
