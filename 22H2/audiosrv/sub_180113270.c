/*
 * XREFs of sub_180113270 @ 0x180113270
 * Callers:
 *     sub_1800D7FC0 @ 0x1800D7FC0 (sub_1800D7FC0.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180112550 @ 0x180112550 (sub_180112550.c)
 *     sub_180112944 @ 0x180112944 (sub_180112944.c)
 *     sub_180113F9C @ 0x180113F9C (sub_180113F9C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180113270(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h]
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF
  __int16 v12; // [rsp+50h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v3 = (int)a3;
  v5 = qword_18019E608;
  v11 = 0LL;
  v12 = 0;
  v9 = 0;
  if ( a3 <= 8 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(qword_18019E608 + 16));
    v10 = v5 + 16;
    v6 = sub_180113F9C(v7, a2, (unsigned int)v3, &v9);
    if ( v6 >= 0 )
    {
      *((_BYTE *)&v11 + 9 * v9 + v3) = 1;
      sub_180112550(v5, a2, 1u, &v11, 0);
    }
    if ( v5 != -16 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 16));
    if ( v6 >= 0 )
      return (unsigned int)sub_180112944(v5, &v11, 0);
  }
  else
  {
    v6 = -2147024809;
    sub_18004BD84(
      (int)retaddr,
      253,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      -2147024809);
  }
  return (unsigned int)v6;
}
