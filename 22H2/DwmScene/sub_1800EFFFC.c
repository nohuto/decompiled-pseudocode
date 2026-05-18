/*
 * XREFs of sub_1800EFFFC @ 0x1800EFFFC
 * Callers:
 *     sub_1800E5DC0 @ 0x1800E5DC0 (sub_1800E5DC0.c)
 *     sub_1800E9AE0 @ 0x1800E9AE0 (sub_1800E9AE0.c)
 * Callees:
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 */

int __fastcall sub_1800EFFFC(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800ED0C0(*(_QWORD *)(a1 + 16), a2);
  return sub_1800EE5A8(a1, v5, *(const void **)a3, (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 6);
}
