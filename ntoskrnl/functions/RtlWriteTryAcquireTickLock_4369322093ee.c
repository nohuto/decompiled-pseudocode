char __fastcall RtlWriteTryAcquireTickLock(signed __int64 *a1)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rax

  _m_prefetchw(a1);
  v1 = *a1;
  if ( (*a1 & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange64(a1, v1 + 1, v1);
    if ( v1 == v2 )
      break;
    v1 = v2;
    _mm_pause();
    if ( (v2 & 1) != 0 )
      return 0;
  }
  return 1;
}
