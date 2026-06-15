/*
 * XREFs of sub_180105B20 @ 0x180105B20
 * Callers:
 *     sub_18007CC0A @ 0x18007CC0A (sub_18007CC0A.c)
 * Callees:
 *     sub_18005262C @ 0x18005262C (sub_18005262C.c)
 *     sub_180108EE0 @ 0x180108EE0 (sub_180108EE0.c)
 *     sub_180109560 @ 0x180109560 (sub_180109560.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180105B20(__int64 a1)
{
  __int64 v2; // rcx

  sub_180108EE0(a1);
  sub_18005262C((void **)(a1 + 224));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 144));
  sub_180109560(a1 + 96);
  v2 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  return sub_1800472E0(v2, 0x10uLL);
}
