__int64 __fastcall PspOpenPartitionHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rax
  unsigned __int64 i; // rcx
  signed __int64 v6; // rtt

  _m_prefetchw((const void *)(a4 + 40));
  v4 = *(_QWORD *)(a4 + 40);
  for ( i = v4 + 1; i > 1; i = v4 + 1 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 40), i, v4);
    if ( v6 == v4 )
      return 0LL;
  }
  if ( i != 1 )
    __fastfail(0xEu);
  return 3221225473LL;
}
