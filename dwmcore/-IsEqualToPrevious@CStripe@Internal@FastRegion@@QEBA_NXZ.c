char __fastcall FastRegion::Internal::CStripe::IsEqualToPrevious(FastRegion::Internal::CStripe *this)
{
  char *v1; // r9
  char *v2; // rdx
  __int64 v3; // r10
  __int64 v5; // r8
  __int64 v6; // r9

  v1 = (char *)this + *((int *)this - 1) - 8;
  v2 = (char *)this + *((int *)this + 1);
  v3 = (int)((v2 - v1) >> 2);
  if ( v3 != (*((int *)this + 3) - (__int64)*((int *)this + 1) + 8) >> 2 )
    return 0;
  v5 = 0LL;
  if ( v3 > 0 )
  {
    v6 = v1 - v2;
    while ( *(_DWORD *)v2 == *(_DWORD *)&v2[v6] )
    {
      ++v5;
      v2 += 4;
      if ( v5 >= v3 )
        return 1;
    }
    return 0;
  }
  return 1;
}
