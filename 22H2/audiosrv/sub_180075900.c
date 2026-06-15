/*
 * XREFs of sub_180075900 @ 0x180075900
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_180075900(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 56) = sub_1800C437C(
                           *(_QWORD *)(a2 + 168),
                           2124LL,
                           "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp");
  return 0LL;
}
