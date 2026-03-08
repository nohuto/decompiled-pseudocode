/*
 * XREFs of ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C003794C
 * Callers:
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C001D504 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     PhkFirstGlobalValid @ 0x1C001D640 (PhkFirstGlobalValid.c)
 *     PhkFirstValid @ 0x1C00368A8 (PhkFirstValid.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C003768C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     GetJournallingQueue @ 0x1C00378D0 (GetJournallingQueue.c)
 *     PhkNextValid @ 0x1C0039A4C (PhkNextValid.c)
 *     xxxLoadHmodIndex @ 0x1C006CD10 (xxxLoadHmodIndex.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C00E77B4 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertAny(const struct tagDomLock *this)
{
  __int64 v2; // rax

  if ( !gbInDestroyHandleTableObjects )
  {
    v2 = SGDGetUserSessionState(this);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 8)) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL() || !tagDomLock::IsLockedExclusive(this) && !tagDomLock::IsLockedShared(this)) )
    {
      __int2c();
    }
  }
}
