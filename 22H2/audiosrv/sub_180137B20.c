/*
 * XREFs of sub_180137B20 @ 0x180137B20
 * Callers:
 *     sub_180060188 @ 0x180060188 (sub_180060188.c)
 * Callees:
 *     ceilf @ 0x1800743F7 (ceilf.c)
 */

unsigned __int64 __fastcall sub_180137B20(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rbx
  float v3; // xmm0_4
  __int64 v4; // rax
  float v5; // xmm0_4
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 56);
  if ( v1 < 0 )
  {
    v4 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
    v3 = (float)(int)v4 + (float)(int)v4;
  }
  else
  {
    v3 = (float)(int)v1;
  }
  v5 = ceilf(v3 / *(float *)a1);
  v6 = 0LL;
  if ( v5 >= 9.223372e18 )
  {
    v5 = v5 - 9.223372e18;
    if ( v5 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  v7 = v6 + (unsigned int)(int)v5;
  result = 8LL;
  if ( v7 > 8 )
    result = v7;
  if ( v2 >= result )
    return v2;
  if ( v2 < 0x200 )
  {
    v2 *= 8LL;
    if ( v2 >= result )
      return v2;
  }
  return result;
}
