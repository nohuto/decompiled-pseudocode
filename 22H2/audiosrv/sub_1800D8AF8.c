/*
 * XREFs of sub_1800D8AF8 @ 0x1800D8AF8
 * Callers:
 *     sub_18000319C @ 0x18000319C (sub_18000319C.c)
 *     sub_18006E0A0 @ 0x18006E0A0 (sub_18006E0A0.c)
 *     sub_180115D60 @ 0x180115D60 (sub_180115D60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D8AF8(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 i; // r8
  signed int v7; // ecx

  v3 = a2 >> 1;
  v5 = 0LL;
  if ( a1 && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    v7 = i == 0 ? 0x80070057 : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -2147024809;
  }
  if ( a3 )
  {
    if ( v7 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v5;
  }
  return (unsigned int)v7;
}
