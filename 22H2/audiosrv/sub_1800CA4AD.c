/*
 * XREFs of sub_1800CA4AD @ 0x1800CA4AD
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_1800CA4AD(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 120) = sub_1800C437C(
                            *(_QWORD *)(a2 + 104),
                            1980,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                            a4);
  return 0LL;
}
