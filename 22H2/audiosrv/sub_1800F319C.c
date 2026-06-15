/*
 * XREFs of sub_1800F319C @ 0x1800F319C
 * Callers:
 *     sub_1800F4C54 @ 0x1800F4C54 (sub_1800F4C54.c)
 *     sub_1800F4D3C @ 0x1800F4D3C (sub_1800F4D3C.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800F4C54 @ 0x1800F4C54 (sub_1800F4C54.c)
 */

__int64 __fastcall sub_1800F319C(__int64 a1, __int64 *a2)
{
  void *v4; // rcx
  __int64 result; // rax
  bool v6; // zf

  v4 = (void *)a2[2];
  if ( v4 )
    sub_18006A148(v4);
  a2[2] = 0LL;
  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v6 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v6 )
    return sub_1800F4C54(a1);
  return result;
}
