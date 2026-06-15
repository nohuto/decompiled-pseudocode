/*
 * XREFs of sub_180066E50 @ 0x180066E50
 * Callers:
 *     sub_180066DA4 @ 0x180066DA4 (sub_180066DA4.c)
 * Callees:
 *     sub_180066EA0 @ 0x180066EA0 (sub_180066EA0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180066E50(__int64 a1)
{
  ULONGLONG TickCount64; // rax

  TickCount64 = GetTickCount64();
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 64) = TickCount64;
  *(_QWORD *)(a1 + 72) = TickCount64;
  *(_QWORD *)(a1 + 88) = TickCount64;
  return sub_180066EA0(a1);
}
