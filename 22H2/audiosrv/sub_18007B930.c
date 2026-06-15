/*
 * XREFs of sub_18007B930 @ 0x18007B930
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18007B930(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 104) = sub_1800C437C(
                            *(_QWORD *)(a2 + 88),
                            614LL,
                            "avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp");
  return 0LL;
}
