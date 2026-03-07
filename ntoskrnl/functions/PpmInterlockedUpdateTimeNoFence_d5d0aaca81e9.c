char __fastcall PpmInterlockedUpdateTimeNoFence(volatile signed __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax
  char v4; // r10
  unsigned __int64 v5; // r9

  v3 = *a1;
  v4 = 0;
  while ( v3 < a2 )
  {
    v5 = v3;
    v3 = _InterlockedCompareExchange64(a1, a2, v3);
    if ( v5 == v3 )
    {
      v4 = 1;
      break;
    }
    _mm_pause();
  }
  if ( a3 )
    *a3 = v3;
  return v4;
}
