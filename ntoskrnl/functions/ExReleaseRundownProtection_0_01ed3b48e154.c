void __stdcall ExReleaseRundownProtection_0(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 v1; // rtt

  _m_prefetchw(RunRef);
  v1 = RunRef->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v1 - 2, v1) )
    ExfReleaseRundownProtection(RunRef);
}
