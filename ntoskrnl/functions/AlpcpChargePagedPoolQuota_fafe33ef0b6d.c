__int64 __fastcall AlpcpChargePagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  _m_prefetchw((const void *)(a1 + 2072));
  v2 = *(_QWORD *)(a1 + 2072);
  if ( v2 < a2 )
    return PsChargeProcessPagedPoolQuota(a1, a2);
  while ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2072), v2 - a2, v2) )
  {
    v2 = *(_QWORD *)(a1 + 2072);
    if ( v2 < a2 )
      return PsChargeProcessPagedPoolQuota(a1, a2);
  }
  return 0LL;
}
