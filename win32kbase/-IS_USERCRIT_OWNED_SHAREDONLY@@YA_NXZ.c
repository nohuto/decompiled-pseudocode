/*
 * XREFs of ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0072B5C
 * Callers:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C003B2D0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     ThreadUnlock1 @ 0x1C003B460 (ThreadUnlock1.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0072A40 (HMUnlockObjectInternal.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0072AEC (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ThreadUnlockWorker1 @ 0x1C009E600 (ThreadUnlockWorker1.c)
 *     UserIsUserCritSecInShared @ 0x1C00D4250 (UserIsUserCritSecInShared.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C01539B8 (LockIntoSharedUserCritDeferredUnlockList.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

char __fastcall IS_USERCRIT_OWNED_SHAREDONLY(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // bl

  v8 = 0;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3, a4) )
    return IS_USERCRIT_OWNED_AT_ALL(v5, v4, v6, v7);
  return v8;
}
