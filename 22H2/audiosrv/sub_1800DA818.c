/*
 * XREFs of sub_1800DA818 @ 0x1800DA818
 * Callers:
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 * Callees:
 *     sub_1800DABB4 @ 0x1800DABB4 (sub_1800DABB4.c)
 */

__int64 __fastcall sub_1800DA818(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v9; // xmm1_8

  for ( i = a2; i != a3; i += 8LL )
    sub_1800DABB4(a4, i);
  result = a1;
  v9 = *(_QWORD *)(a4 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
