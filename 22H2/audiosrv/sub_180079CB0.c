/*
 * XREFs of sub_180079CB0 @ 0x180079CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_180079CB0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 72) = sub_1800C437C(
                           *(_QWORD *)(a2 + 536),
                           418LL,
                           "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp");
  return 0LL;
}
