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
