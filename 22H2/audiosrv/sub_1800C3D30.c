/*
 * XREFs of sub_1800C3D30 @ 0x1800C3D30
 * Callers:
 *     sub_18000770C @ 0x18000770C (sub_18000770C.c)
 *     sub_1800C2BC0 @ 0x1800C2BC0 (sub_1800C2BC0.c)
 *     sub_1800C2ED0 @ 0x1800C2ED0 (sub_1800C2ED0.c)
 *     sub_1800C3DF0 @ 0x1800C3DF0 (sub_1800C3DF0.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C3110 @ 0x1800C3110 (sub_1800C3110.c)
 */

__int64 __fastcall sub_1800C3D30(__int64 *a1, unsigned __int64 a2)
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
  result = sub_1800C3110(*a1 + 8 * a2, 1uLL);
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
