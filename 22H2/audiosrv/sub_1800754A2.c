/*
 * XREFs of sub_1800754A2 @ 0x1800754A2
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_1800754A2(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 48) = sub_1800C437C(
                           *(_QWORD *)(a2 + 40),
                           1910LL,
                           "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp");
  return 0LL;
}
