/*
 * XREFs of sub_180109B70 @ 0x180109B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18008D750 @ 0x18008D750 (sub_18008D750.c)
 *     sub_180107790 @ 0x180107790 (sub_180107790.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=12
_QWORD *__fastcall sub_180109B70(__int64 a1, _QWORD *a2)
{
  __int64 v4[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+38h] [rbp-D0h]
  __int64 v6; // [rsp+40h] [rbp-C8h]
  __int64 v7; // [rsp+50h] [rbp-B8h]
  _QWORD *v8; // [rsp+58h] [rbp-B0h]
  _BYTE v9[64]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v10[64]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v11[64]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v12[64]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v13[64]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v14[64]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v15[64]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v16[64]; // [rsp+228h] [rbp+120h] BYREF
  _BYTE v17[64]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v18[64]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v19[64]; // [rsp+2E8h] [rbp+1E0h] BYREF
  char vars0; // [rsp+328h] [rbp+220h] BYREF

  v8 = a2;
  HIDWORD(v7) = 0;
  v5 = 0LL;
  v6 = 0LL;
  sub_18001CDF8(v4, (__int64)&qword_18020B4D8);
  sub_18008D750((__int64)v9, v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_18001CDF8(v4, (__int64)&qword_18020B418);
  sub_18008D750((__int64)v10, v4, 6);
  v5 = 0LL;
  v6 = 0LL;
  sub_18001CDF8(v4, (__int64)&qword_18020B518);
  sub_18008D750((__int64)v11, v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_18001CDF8(v4, (__int64)&qword_18020B438);
  sub_18008D750((__int64)v12, v4, 6);
  v5 = 0LL;
  v6 = 0LL;
  sub_18001CDF8(v4, (__int64)&qword_18020B4F8);
  sub_18008D750((__int64)v13, v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_18001CDF8(v4, (__int64)&qword_18020B478);
  sub_18008D750((__int64)v14, v4, 5);
  v5 = 0LL;
  v6 = 0LL;
  sub_18001CDF8(v4, (__int64)&qword_18020B538);
  sub_18008D750((__int64)v15, v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_18001CDF8(v4, (__int64)&qword_18020B4B8);
  sub_18008D750((__int64)v16, v4, 6);
  v5 = 0LL;
  v6 = 0LL;
  sub_18001CDF8(v4, (__int64)&qword_18020B578);
  sub_18008D750((__int64)v17, v4, 8);
  v5 = 0LL;
  v6 = 0LL;
  sub_18001CDF8(v4, (__int64)&qword_18020B498);
  sub_18008D750((__int64)v18, v4, 2);
  v5 = 0LL;
  v6 = 0LL;
  sub_18001CDF8(v4, (__int64)&qword_18020B618);
  sub_18008D750((__int64)v19, v4, 2);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_180107790(a2, (__int64)v9, (__int64)&vars0);
  HIDWORD(v7) = 1;
  `eh vector destructor iterator'(v9, 0x40uLL, 0xBuLL, (void (*)(void *))sub_18008DD30);
  return a2;
}
