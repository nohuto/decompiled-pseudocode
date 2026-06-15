/*
 * XREFs of sub_18013A830 @ 0x18013A830
 * Callers:
 *     sub_18013AF20 @ 0x18013AF20 (sub_18013AF20.c)
 *     sub_18013B06C @ 0x18013B06C (sub_18013B06C.c)
 *     sub_18013B508 @ 0x18013B508 (sub_18013B508.c)
 *     sub_18013B948 @ 0x18013B948 (sub_18013B948.c)
 *     sub_18013B9B4 @ 0x18013B9B4 (sub_18013B9B4.c)
 *     sub_18013BAA8 @ 0x18013BAA8 (sub_18013BAA8.c)
 * Callees:
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_18013AC1C @ 0x18013AC1C (sub_18013AC1C.c)
 *     sub_18013ACA8 @ 0x18013ACA8 (sub_18013ACA8.c)
 */

__int64 __fastcall sub_18013A830(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v7 = sub_18013AC1C(a1, a2, &v9);
  if ( v7 >= 0 && (v9 != 15 || !(unsigned __int8)sub_18013ACA8(v6, a2, a3)) )
  {
    v7 = -2147024809;
    sub_1800F3AD4((__int64)L"Did not find end element for %s", a3);
  }
  *a1 = (unsigned int)v7 >> 31;
  return (unsigned int)v7;
}
