/*
 * XREFs of sub_18010CA6E @ 0x18010CA6E
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18010CA6E(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 56) = sub_1800C437C(
                           *(_QWORD *)(a2 + 40),
                           146,
                           (int)"onecoreuap\\internal\\avcore\\inc\\ApplicationSpatialInformationWnf.h",
                           a4);
  return 0LL;
}
