/*
 * XREFs of sub_180067E3C @ 0x180067E3C
 * Callers:
 *     sub_180032BA4 @ 0x180032BA4 (sub_180032BA4.c)
 * Callees:
 *     sub_180062180 @ 0x180062180 (sub_180062180.c)
 */

__int64 __fastcall sub_180067E3C(__int64 a1)
{
  sub_180062180(a1);
  *(_QWORD *)a1 = &Spectre::Engine::CommandList::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  return a1;
}
