/*
 * XREFs of sub_18004BAE4 @ 0x18004BAE4
 * Callers:
 *     sub_18004A5C4 @ 0x18004A5C4 (sub_18004A5C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004BAE4(_QWORD *a1, int a2, __int64 a3)
{
  unsigned int i; // r9d
  _QWORD *v4; // r10
  __int64 v5; // rax
  __int64 result; // rax

  for ( i = 0; i < 9; ++i )
  {
    v4 = &qword_18019D7B0[2 * i];
    v5 = *v4 - *a1;
    if ( *v4 == *a1 )
      v5 = v4[1] - a1[1];
    if ( !v5 )
    {
      *(_DWORD *)(a3 + 16) = i + (a2 != 0 ? 602 : 2);
      result = 0LL;
      *(_OWORD *)a3 = xmmword_1801602C0;
      return result;
    }
  }
  return 2147943568LL;
}
