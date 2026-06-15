/*
 * XREFs of sub_1800DEF3C @ 0x1800DEF3C
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_1800DEF3C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 48) = sub_1800C437C(
                           *(_QWORD *)(a2 + 168),
                           3129,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           a4);
  return 0LL;
}
