/*
 * XREFs of sub_18007B1D4 @ 0x18007B1D4
 * Callers:
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 * Callees:
 *     sub_180063DE0 @ 0x180063DE0 (sub_180063DE0.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 *     sub_18010EB08 @ 0x18010EB08 (sub_18010EB08.c)
 */

__int64 __fastcall sub_18007B1D4(__int64 a1)
{
  __int64 **v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_18010EB08(
    *(_QWORD *)(a1 + 464),
    0,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1661,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick");
  v6 = *(_QWORD *)(a1 + 944);
  v2 = *(__int64 ***)(a1 + 464);
  *(_QWORD *)(a1 + 944) = v6 + 1;
  sub_180063DE0(
    v2,
    (__int64)"..\\Source\\Engine\\Engine.cpp",
    1662,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick_FrameNumber",
    v6);
  v4 = sub_1800CBBF8(v3);
  return sub_1800CBAD4(v4);
}
