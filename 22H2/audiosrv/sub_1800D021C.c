/*
 * XREFs of sub_1800D021C @ 0x1800D021C
 * Callers:
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 *     sub_1800E2BEC @ 0x1800E2BEC (sub_1800E2BEC.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 */

__int64 __fastcall sub_1800D021C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *(__int64 **)a1;
  if ( v6 )
  {
    sub_1800CD58C(v6, *(__int64 **)(a1 + 8));
    sub_1800472E0(*(_QWORD *)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
