/*
 * XREFs of DestroyKL @ 0x1C005206C
 * Callers:
 *     ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x1C0052120 (-DestroyKLIfSupported@@YAXPEAUtagKL@@@Z.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B9600 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 * Callees:
 *     HMAssignmentUnlockWorker @ 0x1C0038F7C (HMAssignmentUnlockWorker.c)
 *     HMFreeObject @ 0x1C004E3F0 (HMFreeObject.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C004E70C (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     DestroyKF @ 0x1C0051F60 (DestroyKF.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall DestroyKL(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  void *v9; // rdx
  __int64 result; // rax
  __int64 i; // rdi
  __int64 *v12; // rcx
  _DWORD *v13; // rax
  void *v14; // rdx
  char v15; // [rsp+30h] [rbp+8h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v15, a1);
  *(_QWORD *)(a1[3] + 16LL) = a1[2];
  v2 = a1[2];
  *(_QWORD *)(v2 + 24) = a1[3];
  if ( HMAssignmentUnlockWorker(a1 + 6, v2, v3, v4) )
  {
    v8 = (_DWORD *)HMAssignmentUnlockWorker(a1 + 7, v5, v6, v7);
    if ( v8 )
      DestroyKF(v8);
  }
  if ( a1[12] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 22); i = (unsigned int)(i + 1) )
    {
      v12 = (__int64 *)(a1[12] + 8 * i);
      if ( !*v12 )
        break;
      v13 = (_DWORD *)HMAssignmentUnlockWorker(v12, v5, v6, v7);
      if ( v13 )
        DestroyKF(v13);
    }
    v14 = (void *)a1[12];
    if ( v14 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v14);
  }
  v9 = (void *)a1[10];
  if ( v9 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v9);
  if ( a1 == (_QWORD *)gpKL )
    gpKL = 0LL;
  result = HMFreeObject((char **)a1);
  if ( v15 )
    gphePrimaryDestroyTarget = 0LL;
  return result;
}
