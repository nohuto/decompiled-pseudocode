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
