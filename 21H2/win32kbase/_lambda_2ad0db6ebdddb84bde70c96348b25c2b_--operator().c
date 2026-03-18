/*
 * XREFs of _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B9600
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B8EAC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C002DC3C (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     HMAssignmentUnlockWorker @ 0x1C0038F7C (HMAssignmentUnlockWorker.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C004E6D0 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     DestroyKL @ 0x1C005206C (DestroyKL.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

__int64 __fastcall lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  const struct tagDomLock *v6; // rcx
  __int64 result; // rax
  _QWORD *v8; // rbx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = *(_QWORD **)(a2 + 16);
  if ( (_QWORD *)v4[2] != v4 )
  {
    do
    {
      v8 = (_QWORD *)v4[2];
      DestroyKL(v4);
      v4 = v8;
    }
    while ( (_QWORD *)v8[2] != v8 );
  }
  if ( !gbInDestroyHandleTableObjects
    && !UserIsUserCritSecInExclusive()
    && (!IS_USERCRIT_OWNED_SHARED()
     || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
     && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  v6 = (const struct tagDomLock *)(dword_1C0294B70 * (unsigned int)(unsigned __int16)*(_DWORD *)a2);
  if ( (*((_BYTE *)qword_1C0294B68 + (_QWORD)v6 + 25) & 1) == 0 )
  {
    LockRefactorStagingAssertOwned(v6);
    HMMarkObjectDestroyWorker((_DWORD *)a2);
  }
  gdwHydraHint |= 0x8000u;
  result = HMAssignmentUnlockWorker(&v9, a2, a3, a4);
  if ( result )
    return DestroyKL(v4);
  return result;
}
