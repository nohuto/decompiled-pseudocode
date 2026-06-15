/*
 * XREFs of sub_1800D7CA4 @ 0x1800D7CA4
 * Callers:
 *     sub_1800D7C90 @ 0x1800D7C90 (sub_1800D7C90.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D569C @ 0x1800D569C (sub_1800D569C.c)
 */

__int64 __fastcall sub_1800D7CA4(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  const void *v8; // rdx
  void *v9; // rcx
  __int64 v10; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v5 = a1[1], v2 > v5) )
    sub_1800B8610(-2147024809);
  result = sub_1800D569C(*a1 + 8 * a2, 1LL);
  v7 = v5 - v2;
  if ( v7 )
  {
    result = *a1;
    v8 = (const void *)(*a1 + 8 * v2);
    v9 = (void *)(*a1 + 8 * a2);
    if ( 8 * v7 )
    {
      if ( !v9 || !v8 )
      {
        *(_DWORD *)o__errno(v9) = 22;
        o__invalid_parameter_noinfo(v10);
        sub_1800B8610(-2147024809);
      }
      result = (__int64)memmove(v9, v8, 8 * v7);
    }
  }
  --a1[1];
  return result;
}
