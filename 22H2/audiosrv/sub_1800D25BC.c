/*
 * XREFs of sub_1800D25BC @ 0x1800D25BC
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_1800D25BC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 56) = sub_1800C437C(
                           *(_QWORD *)(a2 + 40),
                           776,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                           a4);
  return 0LL;
}
