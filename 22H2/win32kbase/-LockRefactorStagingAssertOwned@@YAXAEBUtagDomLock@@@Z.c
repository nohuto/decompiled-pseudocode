/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0064D44
 * Callers:
 *     HMAllocObjectEx @ 0x1C0012A1C (HMAllocObjectEx.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0064AFC (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B2974 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     DestroyKF @ 0x1C00BFF3C (DestroyKF.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C01E2C40 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

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
