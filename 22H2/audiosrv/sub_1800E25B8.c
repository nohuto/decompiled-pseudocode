/*
 * XREFs of sub_1800E25B8 @ 0x1800E25B8
 * Callers:
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_18004DDF0 @ 0x18004DDF0 (sub_18004DDF0.c)
 *     sub_1800E24D0 @ 0x1800E24D0 (sub_1800E24D0.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 */

__int64 __fastcall sub_1800E25B8(_QWORD *a1, __int64 *a2)
{
  sub_1800461B8(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a1)(*a1, &unk_18015B820, a2);
}
