/*
 * XREFs of sub_180055010 @ 0x180055010
 * Callers:
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_1801195CC @ 0x1801195CC (sub_1801195CC.c)
 *     sub_18011A288 @ 0x18011A288 (sub_18011A288.c)
 * Callees:
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180055010(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 >= *a1 )
  {
    v3 = sub_180118A38(v4, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v3);
  }
  return a1[1] + 4 * a2;
}
