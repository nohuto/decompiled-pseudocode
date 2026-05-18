/*
 * XREFs of sub_1800F0830 @ 0x1800F0830
 * Callers:
 *     sub_1800F5B60 @ 0x1800F5B60 (sub_1800F5B60.c)
 * Callees:
 *     sub_18001D118 @ 0x18001D118 (sub_18001D118.c)
 */

__int64 __fastcall sub_1800F0830(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // r10
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx

  v4 = (a1[1] - *a1) >> 3;
  v5 = sub_18001D118((__int64)a1, a2);
  v6 = (_QWORD *)a1[1];
  v7 = (_QWORD *)*a1;
  v8 = v5;
  while ( v7 != v6 )
    *v8++ = *v7++;
  return sub_18001CCB4(a1, (__int64)v5, v4, a2);
}
