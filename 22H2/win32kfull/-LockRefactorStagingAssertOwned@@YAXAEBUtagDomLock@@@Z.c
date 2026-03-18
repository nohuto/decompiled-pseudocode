/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C00713C4
 * Callers:
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C007111C (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     xxxDoSysExpunge @ 0x1C007119C (xxxDoSysExpunge.c)
 *     xxxLoadHmodIndex @ 0x1C01223C0 (xxxLoadHmodIndex.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0070838 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(PERESOURCE *this)
{
  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || !tagDomLock::IsLockedExclusive(this)) )
  {
    __int2c();
  }
}
