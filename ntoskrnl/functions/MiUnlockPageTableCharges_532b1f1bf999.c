void __fastcall MiUnlockPageTableCharges(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v2; // rbp
  int v4; // esi
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 CurrentPrcb; // r8
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  bool v13; // zf
  signed __int32 v14; // eax
  int IsZero; // eax
  int v16; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( a2 == 2 )
  {
    v4 = 3;
    if ( !(unsigned int)MiIsLowestPageTablePage() )
      goto LABEL_37;
  }
  else
  {
    v4 = a2 != 0 ? 1 : 4;
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_37:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v5 = 0LL;
  v6 = 0LL;
  CurrentPrcb = 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 40);
    v16 = 0;
    v9 = v8 & 0xFFFFFFFFFFLL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
      CurrentPrcb = 0x7FFFFFFFFFFFFFFFLL;
    }
    v10 = *(_QWORD *)(BugCheckParameter2 + 24) ^ ((*(_QWORD *)(BugCheckParameter2 + 24) - 0x10000LL) ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(BugCheckParameter2 + 24) = v10;
    v11 = v10 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v11 >= 0x10000 )
      break;
    if ( !v2 )
      v2 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
    ++v5;
    if ( !v11 )
    {
      IsZero = MiPfnShareCountIsZero(BugCheckParameter2, 0LL);
      CurrentPrcb = 0x7FFFFFFFFFFFFFFFLL;
      if ( IsZero != 3 )
        ++v6;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v4 )
      goto LABEL_8;
    BugCheckParameter2 = 48 * v9 - 0x220000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_8:
  if ( v5 )
  {
    if ( (_UNKNOWN *)v2 == &MiSystemPartition )
    {
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      v12 = *(int *)(CurrentPrcb + 34460);
      if ( (_DWORD)v12 != -1 )
      {
        if ( v5 + v12 <= 0x100 && v5 < 0x80000 )
        {
          do
          {
            v14 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 34460), v12 + v5, v12);
            v13 = (_DWORD)v12 == v14;
            LODWORD(v12) = v14;
            if ( v13 )
              goto LABEL_9;
          }
          while ( v14 != -1 && v5 + v14 <= 0x100 );
        }
        if ( (int)v12 > 192
          && (_DWORD)v12 == _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 34460), 192, v12) )
        {
          v5 += (int)v12 - 192;
        }
        if ( !v5 )
          goto LABEL_9;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 17280), v5);
  }
LABEL_9:
  if ( v6 )
    MiReturnCommit(v2, v6, CurrentPrcb);
}
