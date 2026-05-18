/*
 * XREFs of sub_18010EEF8 @ 0x18010EEF8
 * Callers:
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_1800670F0 @ 0x1800670F0 (sub_1800670F0.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18010EEF8(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
}
