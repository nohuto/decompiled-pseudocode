/*
 * XREFs of sub_1800F1548 @ 0x1800F1548
 * Callers:
 *     sub_1800F0078 @ 0x1800F0078 (sub_1800F0078.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800EFEC4 @ 0x1800EFEC4 (sub_1800EFEC4.c)
 */

__int64 __fastcall sub_1800F1548(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 result; // rax

  v6 = *(_QWORD **)a1;
  if ( v6 )
  {
    sub_1800EFEC4(v6, *(_QWORD **)(a1 + 8));
    sub_1800472E0(*(_QWORD *)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
