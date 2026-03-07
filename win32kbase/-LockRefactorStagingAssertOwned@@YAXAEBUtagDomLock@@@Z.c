void __fastcall LockRefactorStagingAssertOwned(const struct tagDomLock *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v5, v4, v6, v7) || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
}
