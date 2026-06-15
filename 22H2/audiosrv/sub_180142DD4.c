/*
 * XREFs of sub_180142DD4 @ 0x180142DD4
 * Callers:
 *     sub_180142CE0 @ 0x180142CE0 (sub_180142CE0.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180142DD4(__int64 a1, int a2, __int64 *a3, int *a4, float a5)
{
  int v5; // eax
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, __int128 *, __int64, int *, int, __int64 *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp-18h]
  int v13; // [rsp+54h] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = a2;
  v15 = a1;
  if ( a4 )
    v5 = (int)((double)(int)((double)(int)(((double)a4[3] - (double)a4[2]) / (double)*a4) * a5 + 0.5) * (double)*a4
             + (double)a4[2]);
  else
    v5 = (int)(float)(a5 * 65536.0);
  v16 = v5;
  v6 = *a3;
  v12 = 1;
  v13 = 2;
  v7 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, int *, int, __int64 *))(v6 + 24);
  v11 = xmmword_180178F18;
  v8 = v7(a3, &v11, 24LL, &v16, 4, &v15);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  sub_18004BD84(
    (int)retaddr,
    163,
    (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\telephonycontroller.cpp",
    v8);
  return v9;
}
