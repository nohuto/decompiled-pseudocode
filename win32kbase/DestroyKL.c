/*
 * XREFs of DestroyKL @ 0x1C00CF5A8
 * Callers:
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C008E99C (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x1C00CF590 (-DestroyKLIfSupported@@YAXPEAUtagKL@@@Z.c)
 * Callees:
 *     HMAssignmentUnlockWorker @ 0x1C007294C (HMAssignmentUnlockWorker.c)
 *     HMFreeObject @ 0x1C0077F50 (HMFreeObject.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0086878 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     DestroyKF @ 0x1C00CF66C (DestroyKF.c)
 */

__int64 __fastcall DestroyKL(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  void *v5; // rax
  char *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int64 i; // rdi
  void *v13; // rax
  char *v14; // rdx
  char v15; // [rsp+30h] [rbp+8h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v15, a1);
  *(_QWORD *)(a1[3] + 16LL) = a1[2];
  *(_QWORD *)(a1[2] + 24LL) = a1[3];
  if ( HMAssignmentUnlockWorker(a1 + 6) )
  {
    v5 = (void *)HMAssignmentUnlockWorker(a1 + 7);
    if ( v5 )
      DestroyKF(v5);
  }
  if ( a1[12] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 22); i = (unsigned int)(i + 1) )
    {
      v2 = (__int64 *)(a1[12] + 8 * i);
      if ( !*v2 )
        break;
      v13 = (void *)HMAssignmentUnlockWorker(v2);
      if ( v13 )
        DestroyKF(v13);
    }
    v14 = (char *)a1[12];
    if ( v14 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
  }
  v6 = (char *)a1[10];
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
  if ( a1 == *(_QWORD **)(SGDGetUserSessionState(v2, v6, v3, v4) + 13896) )
    *(_QWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 13896) = 0LL;
  result = HMFreeObject((unsigned int *)a1, v7, v9, v10);
  if ( v15 )
    gphePrimaryDestroyTarget = 0LL;
  return result;
}
