void __stdcall ExReleaseRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  _EX_RUNDOWN_REF *RunRefs; // rdx
  signed __int64 Count; // r8
  unsigned __int64 v3; // r8

  RunRefs = (_EX_RUNDOWN_REF *)((char *)RunRefCacheAware->RunRefs
                              + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(RunRefs);
  while ( 1 )
  {
    while ( 1 )
    {
      Count = RunRefs->Count;
      if ( (RunRefs->Count & 1) != 0 )
        break;
      if ( Count == _InterlockedCompareExchange64((volatile signed __int64 *)RunRefs, Count - 2, Count) )
        return;
    }
    if ( Count != 1 )
      break;
    RunRefs = RunRefCacheAware->RunRefs;
  }
  v3 = Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    KeSetEvent((PRKEVENT)(v3 + 8), 0, 0);
}
