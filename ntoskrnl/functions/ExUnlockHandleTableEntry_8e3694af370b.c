void __fastcall ExUnlockHandleTableEntry(__int64 a1, volatile signed __int64 *a2)
{
  volatile __int64 *v2; // rcx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedExchangeAdd64(a2, 1uLL);
  v2 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v3, 0);
  if ( *v2 )
    ExfUnblockPushLock(v2, 0LL);
}
