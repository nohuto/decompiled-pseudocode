/*
 * XREFs of sub_1800D0660 @ 0x1800D0660
 * Callers:
 *     sub_1800D06C0 @ 0x1800D06C0 (sub_1800D06C0.c)
 * Callees:
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800D05F4 @ 0x1800D05F4 (sub_1800D05F4.c)
 *     sub_1801040E0 @ 0x1801040E0 (sub_1801040E0.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D0660(__int64 a1, __int64 a2)
{
  char v4; // bl
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_1800619A8(a1);
  sub_1800D05F4(a1, (__int64)v6, a2);
  v4 = 0;
  if ( v6[0] )
  {
    sub_1801040E0(*(_QWORD *)(a1 + 16 * (v7 + 4)));
    v4 = 1;
  }
  sub_180061A34(a1);
  return v4;
}
