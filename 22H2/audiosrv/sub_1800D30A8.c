/*
 * XREFs of sub_1800D30A8 @ 0x1800D30A8
 * Callers:
 *     sub_1800D4618 @ 0x1800D4618 (sub_1800D4618.c)
 * Callees:
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C5F04 @ 0x1800C5F04 (sub_1800C5F04.c)
 *     sub_1800D31A8 @ 0x1800D31A8 (sub_1800D31A8.c)
 */

__int64 __fastcall sub_1800D30A8(__int64 *a1, int a2)
{
  int v2; // r14d
  int v4; // esi
  int v5; // edi
  int v6; // ebp
  int v7; // esi
  __int64 v8; // rax
  void *v9; // rcx
  size_t v10; // r8
  __int64 v11; // rcx

  v2 = 0;
  if ( a2 >= 0 )
    v2 = a2;
  v4 = *(_DWORD *)(*a1 - 16);
  v5 = v4 - v2;
  v6 = 1;
  if ( (int)sub_1800C5F04(1, v2) > v4 )
    v6 = v4 - v2;
  if ( v6 > 0 )
  {
    v7 = v4 - v6;
    v8 = sub_1800D31A8(a1);
    v9 = (void *)(v8 + 2LL * v2);
    v10 = 2LL * (v5 - v6 + 1);
    if ( v10 )
    {
      if ( !v9 || !(v8 + 2 * (v2 + (__int64)v6)) )
      {
        *(_DWORD *)o__errno(v9) = 22;
        o__invalid_parameter_noinfo(v11);
        sub_1800B8610(-2147024809);
      }
      memmove(v9, (const void *)(v8 + 2 * (v2 + (__int64)v6)), v10);
    }
    sub_1800448E4(a1, v7);
  }
  return *(unsigned int *)(*a1 - 16);
}
