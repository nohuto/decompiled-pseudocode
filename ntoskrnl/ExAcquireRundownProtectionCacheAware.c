/*
 * XREFs of ExAcquireRundownProtectionCacheAware @ 0x1402C3B80
 * Callers:
 *     MiProbeLockFrame @ 0x140268ED0 (MiProbeLockFrame.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x1402C3BD0 (ExfAcquireRundownProtection.c)
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  struct _EX_RUNDOWN_REF *v1; // rcx
  unsigned __int64 v2; // rtt

  v1 = (_EX_RUNDOWN_REF *)((char *)RunRefCacheAware->RunRefs
                         + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(v1);
  v2 = v1->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 == _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 + 2, v2) )
    return 1;
  else
    return ExfAcquireRundownProtection(v1);
}
