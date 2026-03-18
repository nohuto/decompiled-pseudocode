/*
 * XREFs of ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C011716C
 * Callers:
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00717AC (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     PhkFirstValid @ 0x1C0071984 (PhkFirstValid.c)
 *     PhkNextValid @ 0x1C00719E4 (PhkNextValid.c)
 *     PhkFirstGlobalValid @ 0x1C0071C04 (PhkFirstGlobalValid.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0116EA4 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     GetJournallingQueue @ 0x1C01170F0 (GetJournallingQueue.c)
 *     xxxLoadHmodIndex @ 0x1C01223C0 (xxxLoadHmodIndex.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0070838 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C007085C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

void __fastcall LockRefactorStagingAssertAny(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  PERESOURCE *v5; // rax

  if ( !gbInDestroyHandleTableObjects )
  {
    v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(this, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*v5) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL() || !tagDomLock::IsLockedExclusive(this) && !tagDomLock::IsLockedShared(this)) )
    {
      __int2c();
    }
  }
}
