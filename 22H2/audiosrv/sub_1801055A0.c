/*
 * XREFs of sub_1801055A0 @ 0x1801055A0
 * Callers:
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 *     sub_180105980 @ 0x180105980 (sub_180105980.c)
 *     sub_18010C820 @ 0x18010C820 (sub_18010C820.c)
 *     sub_18010E768 @ 0x18010E768 (sub_18010E768.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 */

__int64 __fastcall sub_1801055A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  __int64 v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*(_BYTE *)(i + 25); result = sub_1800472E0(v6, 0x48uLL) )
  {
    sub_1801055A0(a1, a2, *(_QWORD *)(i + 16));
    v6 = i;
    i = *(_QWORD *)i;
    sub_18000F708((__int64 *)(v6 + 48));
  }
  return result;
}
