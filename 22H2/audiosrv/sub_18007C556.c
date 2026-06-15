/*
 * XREFs of sub_18007C556 @ 0x18007C556
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18007C556(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 96) = sub_1800C437C(
                           *(_QWORD *)(a2 + 72),
                           923LL,
                           "avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp");
  return 0LL;
}
