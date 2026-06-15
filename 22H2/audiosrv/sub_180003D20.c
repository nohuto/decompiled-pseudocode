/*
 * XREFs of sub_180003D20 @ 0x180003D20
 * Callers:
 *     sub_180002FD4 @ 0x180002FD4 (sub_180002FD4.c)
 *     sub_1800C7DB0 @ 0x1800C7DB0 (sub_1800C7DB0.c)
 * Callees:
 *     sub_180003CE0 @ 0x180003CE0 (sub_180003CE0.c)
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18001B4A0 @ 0x18001B4A0 (sub_18001B4A0.c)
 *     sub_18001B770 @ 0x18001B770 (sub_18001B770.c)
 *     sub_18001B820 @ 0x18001B820 (sub_18001B820.c)
 *     sub_18002B0A0 @ 0x18002B0A0 (sub_18002B0A0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180003D20(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  int v7; // ebx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  sub_180003E08(&v10, &qword_18019F818);
  sub_180003E08(v9, &qword_18019F818);
  if ( a3 )
    v6 = sub_18002B0A0(a1, &v10);
  else
    v6 = sub_18001B820(a1, &v10);
  v7 = v6;
  if ( v6 < 0 || (v7 = sub_18001B770(a1 + 8, v9), v7 < 0) )
  {
    sub_18005E8F8("CAudioSessionInstanceId::ToPersistedString", 1125LL, (unsigned int)v7);
  }
  else
  {
    sub_180003CE0((__int64)&v10);
    sub_180003CE0((__int64)v9);
    sub_18001B4A0(a2, L"%s|%s", v10, v9[0]);
  }
  sub_180006A30(v9[0] - 24LL);
  sub_180006A30(v10 - 24);
  return (unsigned int)v7;
}
