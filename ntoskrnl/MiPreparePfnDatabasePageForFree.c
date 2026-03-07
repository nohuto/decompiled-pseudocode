unsigned __int64 __fastcall MiPreparePfnDatabasePageForFree(unsigned __int64 a1, int a2, int a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 result; // rax
  __int64 v8[7]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v8[0] = MI_READ_PTE_LOCK_FREE(a1);
  v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( !a2 && a3 == 3 )
  {
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v9);
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    --*(_WORD *)(v5 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v6 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (*(_QWORD *)(v6 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = ZeroPte;
  *(_QWORD *)(v5 + 16) = ZeroPte;
  if ( a2 )
    return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v5 + 16));
  return result;
}
