/*
 * XREFs of sub_180062180 @ 0x180062180
 * Callers:
 *     sub_18003D6E0 @ 0x18003D6E0 (sub_18003D6E0.c)
 *     sub_18006215C @ 0x18006215C (sub_18006215C.c)
 *     sub_180067E3C @ 0x180067E3C (sub_180067E3C.c)
 *     sub_18009B0C8 @ 0x18009B0C8 (sub_18009B0C8.c)
 *     sub_1800C6AE4 @ 0x1800C6AE4 (sub_1800C6AE4.c)
 *     sub_1800C8860 @ 0x1800C8860 (sub_1800C8860.c)
 *     sub_1800C8890 @ 0x1800C8890 (sub_1800C8890.c)
 *     sub_1800CC344 @ 0x1800CC344 (sub_1800CC344.c)
 *     sub_1800F3B7C @ 0x1800F3B7C (sub_1800F3B7C.c)
 * Callees:
 *     sub_1800621B0 @ 0x1800621B0 (sub_1800621B0.c)
 */

__int64 __fastcall sub_180062180(__int64 a1)
{
  __int64 result; // rax

  sub_1800621B0();
  *(_QWORD *)a1 = &Spectre::Engine::DeviceResource::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return result;
}
