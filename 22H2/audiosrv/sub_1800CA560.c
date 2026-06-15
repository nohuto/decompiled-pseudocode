/*
 * XREFs of sub_1800CA560 @ 0x1800CA560
 * Callers:
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 *     sub_1800C7054 @ 0x1800C7054 (sub_1800C7054.c)
 *     sub_1800C7330 @ 0x1800C7330 (sub_1800C7330.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

unsigned __int64 __fastcall sub_1800CA560(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r8
  size_t v5; // rcx
  const void *v6; // r10
  void *v7; // r9
  __int64 v8; // rcx
  unsigned __int64 result; // rax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > v4) )
    sub_1800B8610(-2147024809);
  if ( v4 != v2 )
  {
    v5 = 8 * (v4 - v2);
    v6 = (const void *)(*a1 + 8 * v2);
    v7 = (void *)(*a1 + 8 * a2);
    if ( v5 )
    {
      if ( !v7 || !v6 )
      {
        *(_DWORD *)o__errno(v5) = 22;
        o__invalid_parameter_noinfo(v8);
        sub_1800B8610(-2147024809);
      }
      memmove(v7, v6, v5);
      v4 = a1[1];
    }
  }
  result = v4 - 1;
  a1[1] = v4 - 1;
  return result;
}
