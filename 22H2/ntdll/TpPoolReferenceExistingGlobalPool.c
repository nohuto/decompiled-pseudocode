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

PVOID TpPoolReferenceExistingGlobalPool()
{
  PVOID v0; // rbx
  PVOID v2; // [rsp+30h] [rbp+8h]

  v0 = 0LL;
  if ( TppPoolpGlobalPool )
  {
    RtlAcquireSRWLockShared(&TppPoolpGlobalPoolLock);
    v0 = TppPoolpGlobalPool;
    v2 = TppPoolpGlobalPool;
    if ( TppPoolpGlobalPool )
    {
      _InterlockedIncrement((volatile signed __int32 *)TppPoolpGlobalPool);
      v0 = v2;
    }
    RtlReleaseSRWLockShared(&TppPoolpGlobalPoolLock);
  }
  return v0;
}
