/*
 * XREFs of ExfReleaseRundownProtection @ 0x1402C9DA0
 * Callers:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

void __stdcall ExfReleaseRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 Count; // r8
  bool v2; // zf
  signed __int64 v3; // rax
  unsigned __int64 v4; // r8

  _m_prefetchw(RunRef);
  Count = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
  {
LABEL_4:
    v4 = Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) == 1
      && !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 32), 0) )
    {
      KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
    }
  }
  else
  {
    while ( 1 )
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, Count - 2, Count);
      v2 = Count == v3;
      Count = v3;
      if ( v2 )
        break;
      if ( (v3 & 1) != 0 )
        goto LABEL_4;
    }
  }
}
