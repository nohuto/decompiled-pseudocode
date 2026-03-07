__int64 __fastcall MiMakeVaRangePhysicallyContiguous(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  char v10; // r13
  unsigned __int64 NextPageTable; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  ULONG_PTR v15; // rdx
  int v17; // [rsp+78h] [rbp+10h] BYREF
  int v18; // [rsp+80h] [rbp+18h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v18 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = (((a2 + 0x1FFFFF) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  v10 = MiLockWorkingSetShared(a1);
  if ( v7 > v8 )
    goto LABEL_31;
  do
  {
    if ( v9 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal(a1, v9);
    }
    NextPageTable = MiGetNextPageTable(v7, v8, 0LL, v10, 1, &v18);
    if ( !NextPageTable )
      goto LABEL_31;
    v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( NextPageTable != v7 )
      break;
LABEL_7:
    v12 = MI_READ_PTE_LOCK_FREE(v7);
    v19 = v12;
    if ( (v12 & 1) != 0 )
    {
      v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
    }
    else
    {
      if ( (v12 & 0x400) != 0 )
        break;
      if ( (v12 & 0x800) == 0 )
        break;
      v13 = MiLockTransitionLeafPageEx(v7, 0LL, 0);
      if ( !v13 )
        break;
    }
    if ( !(unsigned int)MiCheckContiguityTradeEligible(v13) )
      break;
    v14 = *(_QWORD *)(a4 + 24) & 0xFFFFFFFFFFLL;
    v15 = a4;
    if ( v14 == 0x3FFFFFFFFFLL )
      a4 = 0LL;
    else
      a4 = 48 * v14 - 0x220000000000LL;
    if ( (*(_BYTE *)(v13 + 34) & 7) == 6 )
    {
      MiTradeActivePage(v13, v15, (__int64)(v7 << 25) >> 16, 1u, 0, 0);
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v17);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
    }
    else
    {
      MiReplaceTransitionPage(v13, v15, 0);
    }
    *(_QWORD *)(v13 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v13 + 16));
    MiReturnFreeZeroPage(v13);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v7 & 0x78) == 0 && MiWorkingSetIsContended(a1) || KeShouldYieldProcessor() )
    {
      if ( v9 )
      {
        MiUnlockPageTableInternal(a1, v9);
        v9 = 0LL;
      }
      MiUnlockWorkingSetShared(a1, v10);
      MiLockWorkingSetShared(a1);
    }
    v7 += 8LL;
  }
  while ( v7 <= v8 );
  if ( v9 )
    MiUnlockPageTableInternal(a1, v9);
LABEL_31:
  MiUnlockWorkingSetShared(a1, v10);
  if ( a4 )
  {
    MiFreePageChain(a4);
    return (unsigned int)-1073741823;
  }
  return v4;
}
