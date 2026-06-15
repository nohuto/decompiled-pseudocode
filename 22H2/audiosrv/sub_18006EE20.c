/*
 * XREFs of sub_18006EE20 @ 0x18006EE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180054268 @ 0x180054268 (sub_180054268.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006EBE4 @ 0x18006EBE4 (sub_18006EBE4.c)
 *     sub_1800C4FD8 @ 0x1800C4FD8 (sub_1800C4FD8.c)
 */

__int64 __fastcall sub_18006EE20(__int64 a1, int a2)
{
  __int64 v4; // rcx
  struct _TP_TIMER *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned int v10; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v13[2]; // [rsp+68h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]

  sub_1800462E4(v13, a1);
  v5 = (struct _TP_TIMER *)sub_180054268(v4);
  sub_1800085F0(pv, v5, v6, (struct _TP_TIMER *)L"AudioServerSetDuckingOptionsForCurrentStream");
  v7 = sub_18006EBE4(a1, a2 != 0);
  v10 = v7;
  if ( v7 >= 0 )
    v10 = 0;
  else
    sub_18004BD84((int)retaddr, 5761, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v7);
  sub_18000F690((__int64)pv, v8, v9);
  sub_1800C4FD8(v13);
  return v10;
}
