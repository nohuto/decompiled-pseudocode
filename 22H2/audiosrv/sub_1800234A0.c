/*
 * XREFs of sub_1800234A0 @ 0x1800234A0
 * Callers:
 *     sub_180020B94 @ 0x180020B94 (sub_180020B94.c)
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_180023050 @ 0x180023050 (sub_180023050.c)
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 *     sub_180029348 @ 0x180029348 (sub_180029348.c)
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_0 @ 0x180059000 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_0.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 *     sub_18005AC34 @ 0x18005AC34 (sub_18005AC34.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_18005BBBC @ 0x18005BBBC (sub_18005BBBC.c)
 *     sub_180119090 @ 0x180119090 (sub_180119090.c)
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 *     sub_1801195CC @ 0x1801195CC (sub_1801195CC.c)
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 *     sub_18011D9D4 @ 0x18011D9D4 (sub_18011D9D4.c)
 *     sub_18011E18C @ 0x18011E18C (sub_18011E18C.c)
 *     sub_180123190 @ 0x180123190 (sub_180123190.c)
 * Callees:
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800234A0(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 >= *a1 )
  {
    v3 = sub_180118A38(v4, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v3);
  }
  return a1[1] + 16 * a2;
}
