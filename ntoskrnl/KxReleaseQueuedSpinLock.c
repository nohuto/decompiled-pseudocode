__int64 __fastcall KxReleaseQueuedSpinLock(volatile signed __int64 **a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return KiReleaseQueuedSpinLockInstrumented(a1, retaddr);
  _m_prefetchw(a1);
  v2 = (__int64)*a1;
  if ( !v2 )
  {
    result = _InterlockedCompareExchange64(a1[1], 0LL, (signed __int64)a1);
    if ( a1 == (volatile signed __int64 **)result )
      return result;
    v2 = KxWaitForLockChainValid((__int64 *)a1);
  }
  *a1 = 0LL;
  result = (__int64)a1[1];
  if ( (((unsigned __int8)result ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v2 + 8), result)) & 4) != 0 )
  {
    _InterlockedOr(v4, 0);
    return KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v2 + 8) >> 5) & 0x7F], 0LL));
  }
  return result;
}
