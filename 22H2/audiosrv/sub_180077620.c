/*
 * XREFs of sub_180077620 @ 0x180077620
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_180077620(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 140) = sub_1800C437C(
                            *(_QWORD *)(a2 + 1672),
                            462LL,
                            "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp");
  return 0LL;
}
