/*
 * XREFs of PspJobTimeLimitsWork @ 0x14067FD00
 * Callers:
 *     <none>
 * Callees:
 *     PspEnforceLimits @ 0x14068179C (PspEnforceLimits.c)
 */

__int64 PspJobTimeLimitsWork()
{
  char v0; // bl
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = 0;
  do
  {
    _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
    v1 = PspJobTimeLimitsWorkItemFlags & 0xFFFFFFFC;
    if ( (_InterlockedAnd(&PspJobTimeLimitsWorkItemFlags, 0xFFFFFFFC) & 1) != 0 )
    {
      v0 = 1;
      LOBYTE(v1) = 0;
    }
    else
    {
      LOBYTE(v1) = 1;
    }
    PspEnforceLimits(v1);
    result = (unsigned int)_InterlockedCompareExchange(&PspJobTimeLimitsWorkItemFlags, 0, 4);
  }
  while ( (_DWORD)result != 4 );
  if ( v0 )
    PspJobTimeLimitsCount = 7;
  return result;
}
