/*
 * XREFs of PspLazyInitializeStorageExpansion @ 0x1409B4D98
 * Callers:
 *     PspGetStorageArray @ 0x140738754 (PspGetStorageArray.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspLazyInitializeStorageExpansion(__int64 a1)
{
  _QWORD *Pool2; // rax
  void *v3; // rcx
  __int64 v5; // r8

  Pool2 = (_QWORD *)ExAllocatePool2(72LL, 4096LL, 2017817424LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v5 = 256LL;
  do
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2 += 2;
    --v5;
  }
  while ( v5 );
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 512), (signed __int64)v3, 0LL) )
    ExFreePoolWithTag(v3, 0x78457350u);
  return 0LL;
}
