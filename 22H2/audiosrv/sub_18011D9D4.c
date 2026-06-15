/*
 * XREFs of sub_18011D9D4 @ 0x18011D9D4
 * Callers:
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 */

bool __fastcall sub_18011D9D4(__int64 a1, int a2, _QWORD *a3)
{
  __int64 *v4; // rax

  v4 = (__int64 *)sub_1800234A0((unsigned __int64 *)(a1 + 1752), a2);
  return (unsigned int)sub_180022EE0(v4, a3) != -1;
}
