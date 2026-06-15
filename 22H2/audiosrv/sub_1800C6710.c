/*
 * XREFs of sub_1800C6710 @ 0x1800C6710
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800020C8 @ 0x1800020C8 (sub_1800020C8.c)
 *     sub_180002834 @ 0x180002834 (sub_180002834.c)
 *     sub_18002DD60 @ 0x18002DD60 (sub_18002DD60.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_1800C6710(__int64 a1, struct _RTL_CRITICAL_SECTION *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  float v8; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+38h] [rbp+10h]
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  a2[1].SpinCount = a1;
  v10 = 0LL;
  v8 = 1.0;
  sub_180002834(a1, (__int64)v9, &v8, &v10);
  v3 = sub_1800020C8((__int64)v9, v8, v10, 1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = sub_18002DD60(a1, v9);
    v4 = v3;
    if ( v3 >= 0 )
      return 0;
    v5 = 2907;
  }
  else
  {
    v5 = 2905;
  }
  sub_18004BD84((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", v3);
  v9[1].SpinCount = 0LL;
  return v4;
}
