/*
 * XREFs of _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C007DB68
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C007CD3C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     DestroyKL @ 0x1C0008728 (DestroyKL.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C00097C8 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     HMAssignmentUnlock @ 0x1C0031AA0 (HMAssignmentUnlock.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0033100 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax
  _QWORD *v5; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *(_QWORD **)(a2 + 16);
  if ( (_QWORD *)v2[2] != v2 )
  {
    do
    {
      v5 = (_QWORD *)v2[2];
      DestroyKL(v2);
      v2 = v5;
    }
    while ( (_QWORD *)v5[2] != v5 );
  }
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v6);
  if ( (*((_BYTE *)qword_1C024FA38 + dword_1C024FA40 * (unsigned int)(unsigned __int16)*(_DWORD *)a2 + 25) & 1) == 0 )
  {
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v6);
    HMMarkObjectDestroyWorker((_DWORD *)a2);
  }
  gdwHydraHint |= 0x8000u;
  result = HMAssignmentUnlock(&v7);
  if ( result )
    return DestroyKL(v2);
  return result;
}
