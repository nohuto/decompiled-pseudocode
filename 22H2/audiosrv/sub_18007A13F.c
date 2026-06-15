/*
 * XREFs of sub_18007A13F @ 0x18007A13F
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18007A13F(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 112) = sub_1800C437C(
                            *(_QWORD *)(a2 + 104),
                            2918LL,
                            "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp");
  return 0LL;
}
