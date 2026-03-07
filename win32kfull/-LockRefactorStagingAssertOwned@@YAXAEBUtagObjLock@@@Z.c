void __fastcall LockRefactorStagingAssertOwned(struct _KTHREAD **a1)
{
  __int64 v2; // rcx

  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1)
    && (!IS_USERCRIT_OWNED_AT_ALL(v2) || KeGetCurrentThread() != a1[1]) )
  {
    __int2c();
  }
}
