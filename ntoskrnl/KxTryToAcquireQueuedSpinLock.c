/*
 * XREFs of KxTryToAcquireQueuedSpinLock @ 0x1402DE86C
 * Callers:
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402DE844 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x14056ED60 (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x14056EE70 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140457C4E (KiTryToAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxTryToAcquireQueuedSpinLock(signed __int64 a1, _DWORD *a2)
{
  unsigned int v3; // ecx

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(a1, a2, a1);
  }
  else
  {
    _m_prefetchw(a2);
    v3 = 0;
    if ( *a2 || _InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
      _mm_pause();
    else
      return 1;
  }
  return v3;
}
