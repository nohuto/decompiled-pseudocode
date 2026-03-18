/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C00783CC
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C0054214 (xxxLoadHmodIndex.c)
 *     MapDesktop @ 0x1C0077E30 (MapDesktop.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C0078120 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     xxxDoSysExpunge @ 0x1C00781A4 (xxxDoSysExpunge.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C00541E4 (IS_USERCRIT_OWNED_SHARED.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(PERESOURCE *this)
{
  if ( !gbInDestroyHandleTableObjects
    && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
    && (!IS_USERCRIT_OWNED_SHARED() || !tagDomLock::IsLockedExclusive(this)) )
  {
    __int2c();
  }
}
