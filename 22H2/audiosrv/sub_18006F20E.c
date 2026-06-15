/*
 * XREFs of sub_18006F20E @ 0x18006F20E
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18006F20E(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 80) = sub_1800C437C(
                           *(_QWORD *)(a2 + 72),
                           548LL,
                           "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp");
  return 0LL;
}
