/*
 * XREFs of sub_18002C238 @ 0x18002C238
 * Callers:
 *     sub_18002BC4C @ 0x18002BC4C (sub_18002BC4C.c)
 *     sub_18002BE50 @ 0x18002BE50 (sub_18002BE50.c)
 *     sub_1800614CC @ 0x1800614CC (sub_1800614CC.c)
 *     sub_180067F1C @ 0x180067F1C (sub_180067F1C.c)
 *     sub_1800F96E4 @ 0x1800F96E4 (sub_1800F96E4.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall sub_18002C238(struct _RTL_CRITICAL_SECTION *a1)
{
  InitializeCriticalSection(a1);
  return a1;
}
