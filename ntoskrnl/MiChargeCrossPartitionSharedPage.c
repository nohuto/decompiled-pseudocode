__int64 __fastcall MiChargeCrossPartitionSharedPage(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r8
  __int64 result; // rax
  unsigned int v9; // esi

  v5 = *(_QWORD *)(a3 + 16);
  if ( a2 == a1 )
  {
    if ( (v5 & 0x4000000000000000LL) != 0 )
    {
      *(_QWORD *)(a3 + 16) &= ~0x4000000000000000uLL;
      MiReturnCommit(a1, 1LL, v5);
    }
    return 1LL;
  }
  v9 = ~(v5 >> 59) & 2;
  if ( a4 && (v5 & 0x6000000000000000LL) == 0 )
    v9 |= 1u;
  if ( !v9 || (result = MiGetCrossPartitionCloneCharges(a1, v9), (_DWORD)result) )
  {
    if ( a4 && (*(_QWORD *)(a3 + 16) & 0x6000000000000000LL) == 0x4000000000000000LL )
    {
      _InterlockedDecrement64((volatile signed __int64 *)(a1 + 17848));
    }
    else if ( (v9 & 1) == 0 )
    {
LABEL_16:
      if ( (*(_QWORD *)(a3 + 16) & 0x1000000000000000LL) == 0 )
        *(_QWORD *)(a3 + 16) |= 0x1000000000000000uLL;
      ++*(_QWORD *)(a3 + 8);
      return 1LL;
    }
    *(_QWORD *)(a3 + 16) |= 0x2000000000000000uLL;
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 17848));
    goto LABEL_16;
  }
  return result;
}
