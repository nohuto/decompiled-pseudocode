/*
 * XREFs of sub_1800D1ED8 @ 0x1800D1ED8
 * Callers:
 *     sub_1800DAF14 @ 0x1800DAF14 (sub_1800DAF14.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall sub_1800D1ED8(__int64 a1)
{
  __int128 v1; // xmm1
  unsigned int *v2; // rax
  __int64 v3; // rdx
  __int128 v4; // xmm0

  v1 = 0x3F800000u;
  if ( *(_DWORD *)(a1 + 92) )
  {
    v2 = *(unsigned int **)(a1 + 120);
    v3 = *(unsigned int *)(a1 + 92);
    do
    {
      v4 = *v2++;
      *(float *)&v4 = fminf(*(float *)&v4, *(float *)&v1);
      v1 = v4;
      --v3;
    }
    while ( v3 );
  }
  return (__m128)v1;
}
