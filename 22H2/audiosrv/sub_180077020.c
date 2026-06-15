/*
 * XREFs of sub_180077020 @ 0x180077020
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_180077020(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 112) = sub_1800C437C(
                            *(_QWORD *)(a2 + 104),
                            234LL,
                            "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp");
  return 0LL;
}
