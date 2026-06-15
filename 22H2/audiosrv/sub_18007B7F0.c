/*
 * XREFs of sub_18007B7F0 @ 0x18007B7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18007B7F0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 112) = sub_1800C437C(
                            *(_QWORD *)(a2 + 104),
                            168LL,
                            "avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp");
  return 0LL;
}
