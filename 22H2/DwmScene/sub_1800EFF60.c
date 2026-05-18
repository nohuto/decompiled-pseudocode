/*
 * XREFs of sub_1800EFF60 @ 0x1800EFF60
 * Callers:
 *     sub_18008CE50 @ 0x18008CE50 (sub_18008CE50.c)
 *     sub_1800C0970 @ 0x1800C0970 (sub_1800C0970.c)
 * Callees:
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 */

__int64 __fastcall sub_1800EFF60(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800ED0C0(*(_QWORD *)(a1 + 16), a2);
  return sub_1800EFF94(a1, v5, a3);
}
