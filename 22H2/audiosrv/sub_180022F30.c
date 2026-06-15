/*
 * XREFs of sub_180022F30 @ 0x180022F30
 * Callers:
 *     sub_1800374C8 @ 0x1800374C8 (sub_1800374C8.c)
 *     sub_180037744 @ 0x180037744 (sub_180037744.c)
 *     sub_1800485D0 @ 0x1800485D0 (sub_1800485D0.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_18004978C @ 0x18004978C (sub_18004978C.c)
 *     sub_18005AC34 @ 0x18005AC34 (sub_18005AC34.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_1800702D8 @ 0x1800702D8 (sub_1800702D8.c)
 *     sub_1800C5260 @ 0x1800C5260 (sub_1800C5260.c)
 *     sub_18011A900 @ 0x18011A900 (sub_18011A900.c)
 *     sub_18011B0C8 @ 0x18011B0C8 (sub_18011B0C8.c)
 *     sub_18011C680 @ 0x18011C680 (sub_18011C680.c)
 *     sub_18011C754 @ 0x18011C754 (sub_18011C754.c)
 * Callees:
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180022F30(_QWORD *a1, int a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  if ( (unsigned __int64)a2 >= a1[207] )
  {
    v4 = sub_180118A38(v10, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v4);
  }
  v5 = 96LL * a2;
  sub_1800230F0(v5 + a1[208]);
  if ( v3 >= a1[209] )
  {
    v6 = sub_180118A38(v10, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v6);
  }
  sub_1800230F0(v5 + a1[210]);
  if ( v3 >= a1[211] )
  {
    v7 = sub_180118A38(v10, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v7);
  }
  sub_1800230F0(v5 + a1[212]);
  if ( v3 >= a1[8] )
  {
    v8 = sub_180118A38(v10, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v8);
  }
  return *(unsigned int *)(a1[9] + 4 * v3);
}
