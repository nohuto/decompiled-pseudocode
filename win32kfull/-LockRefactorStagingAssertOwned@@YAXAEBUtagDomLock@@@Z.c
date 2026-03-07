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
