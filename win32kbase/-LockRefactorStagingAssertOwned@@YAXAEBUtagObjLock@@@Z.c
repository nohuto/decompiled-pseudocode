void __fastcall LockRefactorStagingAssertOwned(struct _KTHREAD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE((__int64)a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v6, v5, v7, v8) || KeGetCurrentThread() != a1[1]) )
  {
    __int2c();
  }
}
