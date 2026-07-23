/*
 * XREFs of RtlIntersectBitMapsEx @ 0x14022B8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlIntersectBitMapsEx(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 result; // rax
  __int64 v4; // r10

  v2 = *a1;
  result = *a2;
  if ( *a1 >= *a2 )
    v2 = *a2;
  if ( v2 )
  {
    v4 = 0LL;
    do
    {
      result = a2[1];
      if ( v2 >= 0x40 )
      {
        v2 -= 64LL;
        *(_QWORD *)(v4 + a1[1]) &= *(_QWORD *)(v4 + result);
        v4 += 8LL;
      }
      else
      {
        *(_QWORD *)(v4 + a1[1]) &= *(_QWORD *)(v4 + result) | ~((1LL << v2) - 1);
        v2 = 0LL;
      }
    }
    while ( v2 );
  }
  return result;
}
