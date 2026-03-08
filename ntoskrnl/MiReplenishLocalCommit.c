/*
 * XREFs of MiReplenishLocalCommit @ 0x1402E64D4
 * Callers:
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x1403929E0 (MiSyncCommitSignals.c)
 */

signed __int64 __fastcall MiReplenishLocalCommit(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  signed __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 i; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8

  v5 = a3 + a4;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 17576), a3 + a4, a3);
  if ( a3 == result )
  {
    v9 = *(_QWORD *)(a1 + 16416);
    if ( v5 >= v9 && a3 < v9
      || (v10 = (unsigned __int64 *)(a1 + 16408), v11 = *(_QWORD *)(a1 + 16408), v5 >= v11) && a3 < v11 )
    {
      MiSyncCommitSignals(a1, 0LL, a3);
      v10 = (unsigned __int64 *)(a1 + 16408);
    }
    if ( v5 > *(_QWORD *)(a1 + 0x4000) )
      *(_QWORD *)(a1 + 0x4000) = v5;
    _m_prefetchw((const void *)(a2 + 34456));
    v12 = *(unsigned int *)(a2 + 34456);
    for ( i = a4 + v12; i <= 0x200; i = (int)result + a4 )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 34456), a4 + v12, v12);
      if ( (int)result == v12 )
        return result;
      v12 = (int)result;
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17576), -a4);
    v15 = *(_QWORD *)(a1 + 16416);
    if ( v14 >= v15 && v14 - a4 < v15 )
      return MiSyncCommitSignals(a1, 0LL, v15);
    v15 = *v10;
    result = v14 - a4;
    if ( v14 - a4 < *v10 && v14 >= v15 )
      return MiSyncCommitSignals(a1, 0LL, v15);
  }
  return result;
}
