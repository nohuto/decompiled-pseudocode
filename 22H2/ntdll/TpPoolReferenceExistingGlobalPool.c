/*
 * XREFs of TpPoolReferenceExistingGlobalPool @ 0x1800710DC
 * Callers:
 *     TpSetDefaultPoolStackInformation @ 0x180070A10 (TpSetDefaultPoolStackInformation.c)
 *     RtlpTpWorkCallback @ 0x180070B60 (RtlpTpWorkCallback.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111C30 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall TpPoolReferenceExistingGlobalPool(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h]

  v4 = 0LL;
  if ( TppPoolpGlobalPool )
  {
    RtlAcquireSRWLockShared(&TppPoolpGlobalPoolLock, a2, a3, a4);
    v4 = TppPoolpGlobalPool;
    v6 = TppPoolpGlobalPool;
    if ( TppPoolpGlobalPool )
    {
      _InterlockedIncrement((volatile signed __int32 *)TppPoolpGlobalPool);
      v4 = v6;
    }
    RtlReleaseSRWLockShared(&TppPoolpGlobalPoolLock);
  }
  return v4;
}
