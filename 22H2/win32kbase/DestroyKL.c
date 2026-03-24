/*
 * XREFs of DestroyKL @ 0x1C0008728
 * Callers:
 *     ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x1C0008710 (-DestroyKLIfSupported@@YAXPEAUtagKL@@@Z.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C007DB68 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 * Callees:
 *     DestroyKF @ 0x1C00087B8 (DestroyKF.c)
 *     HMFreeObject @ 0x1C0009390 (HMFreeObject.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     HMAssignmentUnlock @ 0x1C0031AA0 (HMAssignmentUnlock.c)
 */

__int64 __fastcall DestroyKL(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rcx
  __int64 i; // rdi
  _QWORD *v6; // rcx
  void *v7; // rax

  *(_QWORD *)(a1[3] + 16LL) = a1[2];
  *(_QWORD *)(a1[2] + 24LL) = a1[3];
  if ( HMAssignmentUnlock(a1 + 6) )
  {
    v2 = (void *)HMAssignmentUnlock(a1 + 7);
    if ( v2 )
      DestroyKF(v2);
  }
  if ( a1[12] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 22); i = (unsigned int)(i + 1) )
    {
      v6 = (_QWORD *)(a1[12] + 8 * i);
      if ( !*v6 )
        break;
      v7 = (void *)HMAssignmentUnlock(v6);
      if ( v7 )
        DestroyKF(v7);
    }
    Win32FreePool(a1[12]);
  }
  v3 = a1[10];
  if ( v3 )
    Win32FreePool(v3);
  if ( a1 == (_QWORD *)gpKL )
    gpKL = 0LL;
  return HMFreeObject(a1);
}
