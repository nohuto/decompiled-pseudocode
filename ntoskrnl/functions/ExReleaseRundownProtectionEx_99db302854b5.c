void __stdcall ExReleaseRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // r9
  bool v3; // zf
  signed __int64 v4; // rax
  unsigned __int64 v5; // r9

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
  {
LABEL_4:
    v5 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, -(__int64)Count) == Count
      && !_interlockedbittestandreset((volatile signed __int32 *)(v5 + 32), 0) )
    {
      KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
    }
  }
  else
  {
    while ( 1 )
    {
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v2 - 2 * Count, v2);
      v3 = v2 == v4;
      v2 = v4;
      if ( v3 )
        break;
      if ( (v4 & 1) != 0 )
        goto LABEL_4;
    }
  }
}
