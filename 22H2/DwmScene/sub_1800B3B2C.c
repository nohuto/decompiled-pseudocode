/*
 * XREFs of sub_1800B3B2C @ 0x1800B3B2C
 * Callers:
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BD90 (_guard_check_icall_nop.c)
 *     sub_1800B24F0 @ 0x1800B24F0 (sub_1800B24F0.c)
 *     sub_1800B3184 @ 0x1800B3184 (sub_1800B3184.c)
 *     sub_1800B3284 @ 0x1800B3284 (sub_1800B3284.c)
 *     sub_1800B3788 @ 0x1800B3788 (sub_1800B3788.c)
 *     sub_1800B3BB4 @ 0x1800B3BB4 (sub_1800B3BB4.c)
 *     sub_1800C6730 @ 0x1800C6730 (sub_1800C6730.c)
 */

char __fastcall sub_1800B3B2C(__m128 *a1, _DWORD *a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // rax
  __int128 v6; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v7[152]; // [rsp+30h] [rbp-98h] BYREF

  v2 = (__int64)&a1[6].m128_i64[1] + 4;
  sub_1800B3184(&a1[6].m128_i32[3], a2);
  a1[15].m128_i32[3] = 2;
  sub_1800B24F0(v2);
  v4 = (_DWORD *)sub_1800C6730(v7, v2);
  sub_1800B3284((__m128 *)a1[16].m128_i32, v4);
  sub_1800B3BB4(a1);
  v6 = xmmword_18020DC60;
  return sub_1800B3788(a1, (__m128 *)&v6);
}
