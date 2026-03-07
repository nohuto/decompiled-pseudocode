__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  signed __int16 v3; // ax
  signed __int16 v4; // tt

  v2 = 0;
  if ( (*(_BYTE *)(a2 + 12) & 1) == 0 )
  {
    _m_prefetchw((const void *)(a2 + 12));
    v3 = *(_WORD *)(a2 + 12);
    do
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 12), v3 | 1, v3);
    }
    while ( v4 != v3 );
    if ( (v3 & 1) == 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 800), a2, 2);
      return 1;
    }
  }
  return v2;
}
