/*
 * XREFs of RtlStackTraceHashFunction @ 0x14040C100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStackTraceHashFunction(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r9
  unsigned int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // rcx
  unsigned __int64 v7; // r8

  result = 0LL;
  v3 = 4LL * a1;
  v4 = 0;
  if ( v3 )
  {
    v5 = 0LL;
    do
    {
      v6 = v4 + 1;
      v4 += 2;
      v7 = *(unsigned __int16 *)(a2 + 2 * v5) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 2 * v6);
      v5 = v4;
      result += v7;
    }
    while ( v4 < v3 );
  }
  return result;
}
