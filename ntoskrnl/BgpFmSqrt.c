/*
 * XREFs of BgpFmSqrt @ 0x140382F80
 * Callers:
 *     RaspTestIntersection @ 0x140382C60 (RaspTestIntersection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFmSqrt(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( a1 <= 0 )
    return 0LL;
  v1 = a1 << 32;
  v2 = 0LL;
  v3 = (a1 + 1) >> 1;
  if ( v3 > 0 )
  {
    do
      v3 -= v2++;
    while ( v3 > v2 );
  }
  v4 = v2 << 16;
  if ( !v4 )
    return 0LL;
  v5 = (v1 + (v1 + v4 * v4) / (2 * v4) * ((v1 + v4 * v4) / (2 * v4))) / (2 * ((v1 + v4 * v4) / (2 * v4)));
  v6 = (v1 + (v1 + v5 * v5) / (2 * v5) * ((v1 + v5 * v5) / (2 * v5))) / (2 * ((v1 + v5 * v5) / (2 * v5)));
  v7 = (v1 + (v1 + v6 * v6) / (2 * v6) * ((v1 + v6 * v6) / (2 * v6))) / (2 * ((v1 + v6 * v6) / (2 * v6)));
  return (v1 + v7 * v7) / (2 * v7);
}
