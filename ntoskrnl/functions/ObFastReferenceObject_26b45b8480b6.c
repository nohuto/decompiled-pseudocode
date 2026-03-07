unsigned __int64 __fastcall ObFastReferenceObject(signed __int64 *a1)
{
  signed __int64 v1; // r9
  signed __int64 v2; // rax
  signed __int64 v3; // rbx
  unsigned int v4; // r9d
  unsigned __int64 v5; // rbx

  _m_prefetchw(a1);
  v1 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v2 = _InterlockedCompareExchange64(a1, v1 - 1, v1);
      if ( v1 == v2 )
        break;
      v1 = v2;
    }
    while ( (v2 & 0xF) != 0 );
  }
  v3 = v1;
  v4 = v1 & 0xF;
  v5 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v4 <= 1 )
  {
    if ( !v4 )
      return 0LL;
    ObpFastReplenishReference(a1, v5);
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v5 - 48);
  return v5;
}
