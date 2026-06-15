/*
 * XREFs of sub_1800B470C @ 0x1800B470C
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x18006AA72 (_o___std_exception_copy.c)
 *     sub_1800B5F1C @ 0x1800B5F1C (sub_1800B5F1C.c)
 */

__int64 __fastcall sub_1800B470C(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &off_180149EB8;
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy();
  *(_QWORD *)a1 = off_180154D88;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  sub_1800B5F1C(a1 + 168, *(_QWORD *)(a2 + 168), *(_QWORD *)(a2 + 176));
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  sub_1800B5F1C(a1 + 184, *(_QWORD *)(a2 + 184), *(_QWORD *)(a2 + 192));
  return a1;
}
