/*
 * XREFs of PspJobTimeLimitsWork @ 0x1406FB500
 * Callers:
 *     <none>
 * Callees:
 *     PspEnforceLimits @ 0x1406FB5C0 (PspEnforceLimits.c)
 */

__int64 PspJobTimeLimitsWork()
{
  char v0; // bl
  __int64 v1; // rcx
  char v2; // al
  __int64 result; // rax

  v0 = 0;
  do
  {
    _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
    v1 = PspJobTimeLimitsWorkItemFlags & 0xFFFFFFFC;
    if ( (_InterlockedAnd(&PspJobTimeLimitsWorkItemFlags, 0xFFFFFFFC) & 1) != 0 )
    {
      v2 = 0;
      v0 = 1;
    }
    else
    {
      v2 = 1;
    }
    LOBYTE(v1) = v2;
    PspEnforceLimits(v1);
    result = (unsigned int)_InterlockedCompareExchange(&PspJobTimeLimitsWorkItemFlags, 0, 4);
  }
  while ( (_DWORD)result != 4 );
  if ( v0 )
    PspJobTimeLimitsCount = 7;
  return result;
}
