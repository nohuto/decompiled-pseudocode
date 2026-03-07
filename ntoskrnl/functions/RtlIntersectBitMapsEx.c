unsigned __int64 __fastcall RtlIntersectBitMapsEx(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 result; // rax
  __int64 i; // r10

  v2 = *a1;
  result = *a2;
  if ( *a1 >= *a2 )
    v2 = *a2;
  if ( v2 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      result = a2[1];
      if ( v2 < 0x40 )
        break;
      *(_QWORD *)(i + a1[1]) &= *(_QWORD *)(i + result);
      v2 -= 64LL;
      if ( !v2 )
        return result;
    }
    *(_QWORD *)(i + a1[1]) &= *(_QWORD *)(i + result) | ~((1LL << v2) - 1);
  }
  return result;
}
