unsigned __int64 __fastcall PspInterlockedMaxQuota(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8

  _m_prefetchw(a1);
  result = *a1;
  if ( a2 > *a1 )
  {
    do
    {
      v3 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, a2, result);
    }
    while ( result != v3 && a2 > result );
  }
  return result;
}
