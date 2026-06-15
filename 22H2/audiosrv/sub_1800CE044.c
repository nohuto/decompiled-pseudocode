/*
 * XREFs of sub_1800CE044 @ 0x1800CE044
 * Callers:
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 * Callees:
 *     sub_1800CFF50 @ 0x1800CFF50 (sub_1800CFF50.c)
 */

__int64 __fastcall sub_1800CE044(__int64 a1)
{
  sub_1800CFF50(*(_QWORD *)a1 + 56LL, *(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 16LL))(**(_QWORD **)(a1 + 16));
}
