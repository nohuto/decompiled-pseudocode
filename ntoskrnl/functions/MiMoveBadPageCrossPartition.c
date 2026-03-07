__int64 __fastcall MiMoveBadPageCrossPartition(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v13; // zf

  v5 = 25408LL * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2);
  v6 = v5 + *(_QWORD *)(a2 + 16);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 23104));
  --*(_QWORD *)(v6 + 23136);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 23104));
  v7 = v5 + *(_QWORD *)(a3 + 16);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 23104));
  v8 = 1LL;
  ++*(_QWORD *)(v7 + 23136);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 23104));
  MiAcquireNonPagedResources(a3, 1uLL, 0LL, 1u);
  MiReturnCommit(a2, 1LL, v9);
  result = (__int64)MiSystemPartition;
  if ( (unsigned __int16 *)a2 != MiSystemPartition )
    goto LABEL_11;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_11;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
  {
LABEL_7:
    if ( (int)CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                               192,
                               CachedResidentAvailable);
      if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
      {
        result = (unsigned int)(CachedResidentAvailable - 192);
        v8 = (int)result + 1LL;
      }
    }
    if ( !v8 )
      return result;
LABEL_11:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 17280), v8);
    return result;
  }
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                             CachedResidentAvailable + 1,
                             CachedResidentAvailable);
    v13 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
    CachedResidentAvailable = (int)result;
    if ( v13 )
      return result;
    if ( (_DWORD)result != -1 )
    {
      result = (int)result + 1LL;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        continue;
    }
    goto LABEL_7;
  }
}
