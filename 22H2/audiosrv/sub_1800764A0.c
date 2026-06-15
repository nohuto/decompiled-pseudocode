/*
 * XREFs of sub_1800764A0 @ 0x1800764A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_1800764A0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 48) = sub_1800C437C(
                           *(_QWORD *)(a2 + 184),
                           645LL,
                           "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp");
  return 0LL;
}
