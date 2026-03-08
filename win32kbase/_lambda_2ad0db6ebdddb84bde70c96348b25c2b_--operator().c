/*
 * XREFs of _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C008E99C
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008DC04 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C003A33C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003A360 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     HMAssignmentUnlockWorker @ 0x1C007294C (HMAssignmentUnlockWorker.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0086908 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0086944 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     DestroyKL @ 0x1C00CF5A8 (DestroyKL.c)
 */

__int64 __fastcall lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // rcx
  const struct tagDomLock *v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v4 = *(_QWORD **)(a2 + 16);
  if ( (_QWORD *)v4[2] != v4 )
  {
    do
    {
      v9 = (_QWORD *)v4[2];
      DestroyKL(v4);
      v4 = v9;
    }
    while ( (_QWORD *)v9[2] != v9 );
  }
  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v6, a2, a3, a4)
     || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
     && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  v7 = (const struct tagDomLock *)(dword_1C02D0E10 * (unsigned int)(unsigned __int16)*(_DWORD *)a2);
  if ( (*((_BYTE *)qword_1C02D0E08 + (_QWORD)v7 + 25) & 1) == 0 )
  {
    LockRefactorStagingAssertOwned(v7, a2, a3, a4);
    HMMarkObjectDestroyWorker((_DWORD *)a2);
  }
  gdwHydraHint |= 0x8000u;
  result = HMAssignmentUnlockWorker(&v10);
  if ( result )
    return DestroyKL(v4);
  return result;
}
