/*
 * XREFs of MiUnlockPageTableCharges @ 0x140338DA8
 * Callers:
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MiUnlockPageTableRange @ 0x14032A12C (MiUnlockPageTableRange.c)
 *     MiUnlockWsle @ 0x140338C2C (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x140339070 (NtLockVirtualMemory.c)
 *     MiDemoteCombinedPte @ 0x14036ABB0 (MiDemoteCombinedPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiPfnShareCountIsZero @ 0x1402A6820 (MiPfnShareCountIsZero.c)
 *     MiIsLowestPageTablePage @ 0x140338FE4 (MiIsLowestPageTablePage.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockPageTableCharges(__int64 BugCheckParameter2, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  int IsLowestPageTablePage; // eax
  int v7; // ebp
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rdx
  int IsZero; // eax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v17; // zf
  signed __int32 v18; // eax
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( (_DWORD)a2 == 2 )
  {
    IsLowestPageTablePage = MiIsLowestPageTablePage();
    v7 = 3;
  }
  else
  {
    if ( !(_DWORD)a2 )
    {
      v7 = 4;
      goto LABEL_7;
    }
    IsLowestPageTablePage = 1;
    v7 = 1;
  }
  if ( !IsLowestPageTablePage )
    goto LABEL_38;
LABEL_7:
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_38:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    v11 = *(_QWORD *)(BugCheckParameter2 + 40);
    v19 = 0;
    v12 = v11 & 0xFFFFFFFFFLL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v19, a2, v10, a4);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = *(_QWORD *)(BugCheckParameter2 + 24) ^ ((*(_QWORD *)(BugCheckParameter2 + 24) - 0x10000LL) ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(BugCheckParameter2 + 24) = v13;
    a2 = v13 & 0x3FFFFFFFFFFFFFFFLL;
    if ( a2 >= 0x10000 )
      break;
    if ( !v4 )
      v4 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
    ++v8;
    if ( !a2 )
    {
      IsZero = MiPfnShareCountIsZero(BugCheckParameter2, 0LL);
      v10 = 0x7FFFFFFFFFFFFFFFLL;
      if ( IsZero != 3 )
        ++v9;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v7 )
      goto LABEL_22;
    BugCheckParameter2 = 48 * v12 - 0x58000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_22:
  if ( v8 )
  {
    if ( (ULONG_PTR *)v4 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v8 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v8 >= 0x80000 )
              break;
            v18 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + v8,
                    CachedResidentAvailable);
            v17 = (_DWORD)CachedResidentAvailable == v18;
            LODWORD(CachedResidentAvailable) = v18;
            if ( v17 )
              goto LABEL_35;
          }
          while ( v18 != -1 && v8 + v18 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v8 += (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v8 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7168), v8);
  }
LABEL_35:
  if ( v9 )
    MiReturnCommit(v4, v9);
}
