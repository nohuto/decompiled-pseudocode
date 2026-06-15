/*
 * XREFs of sub_1800E7D10 @ 0x1800E7D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E7A9C @ 0x1800E7A9C (sub_1800E7A9C.c)
 */

__int64 __fastcall sub_1800E7D10(__int64 a1, __int64 *a2)
{
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF

  v3[0] = off_180155638;
  v3[7] = v3;
  return sub_1800E7A9C(a1, (__int64)v3, a2);
}
