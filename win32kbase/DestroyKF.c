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
