/*
 * XREFs of DestroyKF @ 0x1C00CF66C
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0085310 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     DestroyKL @ 0x1C00CF5A8 (DestroyKL.c)
 *     ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1C01534D0 (-DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z.c)
 * Callees:
 *     HMFreeObject @ 0x1C0077F50 (HMFreeObject.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0086878 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0086908 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0086944 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RemoveKeyboardLayoutFile @ 0x1C00CF6D0 (RemoveKeyboardLayoutFile.c)
 */

__int64 __fastcall DestroyKF(_DWORD *a1)
{
  __int64 v2; // rdx
  const struct tagDomLock *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rdx
  char v10; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v10, a1);
  LockRefactorStagingAssertOwned(v3, v2, v4, v5);
  result = HMMarkObjectDestroyWorker(a1);
  if ( (_DWORD)result )
  {
    RemoveKeyboardLayoutFile();
    v9 = (char *)*((_QWORD *)a1 + 3);
    if ( v9 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
    result = HMFreeObject(a1, (__int64)v9, v7, v8);
  }
  if ( v10 )
    gphePrimaryDestroyTarget = 0LL;
  return result;
}
