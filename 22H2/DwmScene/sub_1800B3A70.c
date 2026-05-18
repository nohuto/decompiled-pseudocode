/*
 * XREFs of sub_1800B3A70 @ 0x1800B3A70
 * Callers:
 *     sub_1800B38C0 @ 0x1800B38C0 (sub_1800B38C0.c)
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BD90 (_guard_check_icall_nop.c)
 *     sub_1800B26AC @ 0x1800B26AC (sub_1800B26AC.c)
 *     sub_1800B3184 @ 0x1800B3184 (sub_1800B3184.c)
 *     sub_1800B3284 @ 0x1800B3284 (sub_1800B3284.c)
 *     sub_1800B3788 @ 0x1800B3788 (sub_1800B3788.c)
 *     sub_1800B3BB4 @ 0x1800B3BB4 (sub_1800B3BB4.c)
 *     sub_1800C6564 @ 0x1800C6564 (sub_1800C6564.c)
 *     sub_1800C66F4 @ 0x1800C66F4 (sub_1800C66F4.c)
 */

char __fastcall sub_1800B3A70(__m128 *a1, __m128 *a2)
{
  _DWORD *v4; // rax
  __m128 *v5; // rax
  __m128 v7; // [rsp+20h] [rbp-B8h] BYREF
  __m128 v8[10]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = (_DWORD *)sub_1800C6564(v8);
  sub_1800B3284((__m128 *)a1[16].m128_i32, v4);
  sub_1800C66F4(&a1[16], a2);
  v5 = sub_1800B26AC(v8, a1 + 16);
  sub_1800B3184(&a1[6].m128_i32[3], v5);
  sub_1800B3BB4(a1);
  v7 = *a2;
  return sub_1800B3788(a1, &v7);
}
