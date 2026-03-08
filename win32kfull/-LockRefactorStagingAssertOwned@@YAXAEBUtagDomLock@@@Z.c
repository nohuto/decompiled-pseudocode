/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C00C9628
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C006CD10 (xxxLoadHmodIndex.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C00C9380 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     xxxDoSysExpunge @ 0x1C00C9400 (xxxDoSysExpunge.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(PERESOURCE *this)
{
  __int64 v2; // rcx

  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)this)
    && (!IS_USERCRIT_OWNED_AT_ALL(v2) || !tagDomLock::IsLockedExclusive(this)) )
  {
    __int2c();
  }
}
