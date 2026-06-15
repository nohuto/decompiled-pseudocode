/*
 * XREFs of sub_18007CB08 @ 0x18007CB08
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18007CB08(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 64) = sub_1800C437C(
                           *(_QWORD *)(a2 + 2136),
                           262LL,
                           "avcore\\audiocore\\server\\audiosrv\\constraintmodel\\lib\\constraintmodel.cpp");
  return 0LL;
}
