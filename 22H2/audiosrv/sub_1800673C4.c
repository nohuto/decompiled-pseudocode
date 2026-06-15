/*
 * XREFs of sub_1800673C4 @ 0x1800673C4
 * Callers:
 *     sub_180068C90 @ 0x180068C90 (sub_180068C90.c)
 * Callees:
 *     sub_18006740C @ 0x18006740C (sub_18006740C.c)
 *     sub_1800674C0 @ 0x1800674C0 (sub_1800674C0.c)
 */

char __fastcall sub_1800673C4(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // bl
  __int64 v4; // r8
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  sub_1800674C0(a1, &v6);
  LOBYTE(v2) = 1;
  v3 = (v6 >> 12) & 0x3F;
  LOBYTE(v4) = v3;
  sub_18006740C(a1, v2, v4, 2LL);
  return v3;
}
