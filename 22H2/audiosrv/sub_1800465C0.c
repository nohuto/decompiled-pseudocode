/*
 * XREFs of sub_1800465C0 @ 0x1800465C0
 * Callers:
 *     sub_1800C9420 @ 0x1800C9420 (sub_1800C9420.c)
 * Callees:
 *     sub_18006DA9C @ 0x18006DA9C (sub_18006DA9C.c)
 */

__int64 __fastcall sub_1800465C0(__int64 a1, int a2, __int64 a3, int a4, char a5)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-30h] BYREF
  int v7; // [rsp+68h] [rbp+18h] BYREF
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF
  int v9; // [rsp+78h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = a2;
  v6[0] = a1 - 16;
  v6[1] = &v8;
  v6[2] = &a5;
  v6[3] = &v7;
  v6[4] = &v9;
  return sub_18006DA9C(v6);
}
