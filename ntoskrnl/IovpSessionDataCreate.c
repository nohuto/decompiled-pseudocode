/*
 * XREFs of IovpSessionDataCreate @ 0x140ADAEA8
 * Callers:
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140ACFBD0 (IovUtilIsVerifiedDeviceStack.c)
 */

char *__fastcall IovpSessionDataCreate(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rbp
  int v5; // ecx
  size_t v6; // rsi
  int v7; // r14d
  char *Pool2; // rax
  char *v9; // rbx
  char *result; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx

  if ( !a3 && !(unsigned int)IovUtilIsVerifiedDeviceStack(a1) )
    return 0LL;
  v4 = *a2;
  v5 = *(char *)(*a2 + 66);
  v6 = (unsigned int)(120 * v5 + 200);
  if ( *(char *)(*a2 + 66) <= 20 && ViSessionDataInitialized )
  {
    v7 = 1;
    Pool2 = (char *)ExAllocateFromNPagedLookasideList(&ViSessionDataLookaside);
  }
  else
  {
    v7 = 0;
    Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(120 * v5 + 200), 0x73707249u);
  }
  v9 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memset(Pool2, 0, v6);
  if ( v7 )
    *((_DWORD *)v9 + 8) |= 4u;
  v11 = v9 + 16;
  *((_DWORD *)v9 + 18) = MmVerifierData;
  v12 = a2 + 8;
  *(_QWORD *)v9 = a2;
  v13 = a2[8];
  if ( *(__int64 **)(v13 + 8) != a2 + 8 )
    __fastfail(3u);
  *((_QWORD *)v9 + 3) = v12;
  *v11 = v13;
  *(_QWORD *)(v13 + 8) = v11;
  *v12 = v11;
  a2[30] = (__int64)v9;
  *((_BYTE *)a2 + 184) = *(_BYTE *)(v4 + 67);
  *((_DWORD *)a2 + 14) = a2[7] & 0xFFFFFE2E | 1;
  result = v9;
  *((_QWORD *)v9 + 8) = v4;
  return result;
}
