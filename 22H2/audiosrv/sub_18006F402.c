/*
 * XREFs of sub_18006F402 @ 0x18006F402
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18006F402(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 96) = sub_1800C437C(
                           *(_QWORD *)(a2 + 88),
                           840LL,
                           "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp");
  return 0LL;
}
