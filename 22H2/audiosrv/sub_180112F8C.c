/*
 * XREFs of sub_180112F8C @ 0x180112F8C
 * Callers:
 *     sub_18010E8D0 @ 0x18010E8D0 (sub_18010E8D0.c)
 *     sub_18010E918 @ 0x18010E918 (sub_18010E918.c)
 *     sub_18010EAF0 @ 0x18010EAF0 (sub_18010EAF0.c)
 *     sub_18010ED94 @ 0x18010ED94 (sub_18010ED94.c)
 *     sub_18010F970 @ 0x18010F970 (sub_18010F970.c)
 *     sub_180113124 @ 0x180113124 (sub_180113124.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180110E94 @ 0x180110E94 (sub_180110E94.c)
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 *     sub_180113C98 @ 0x180113C98 (sub_180113C98.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180112F8C(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // r9
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // rbx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v15[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int16 v18; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v20; // [rsp+B0h] [rbp+40h] BYREF

  v20 = a3;
  v14 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v15[1] = &v5->DebugInfo;
  v7 = *(__int64 **)(a1 + 968);
  v8 = v7[1];
  if ( *(_BYTE *)(v8 + 25) )
    goto LABEL_9;
  v9 = v20;
  do
  {
    if ( *(_QWORD *)(v8 + 32) >= v20 )
    {
      v7 = (__int64 *)v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  while ( !*(_BYTE *)(v8 + 25) );
  if ( v7 == *(__int64 **)(a1 + 968) || v20 < v7[4] )
  {
LABEL_9:
    v15[0] = &v20;
    v7 = (__int64 *)*sub_180110E94((__int64 *)(a1 + 968), &v16, v7, v6, v15);
  }
  v10 = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))v7[5];
  v14 = v10;
  if ( v10 )
  {
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *), __int64))(*v10)[1])(v10, v9);
    if ( v5 )
      LeaveCriticalSection(v5);
    v12 = sub_180112CEC(a1, a2, v10, 1, &v17);
    v11 = v12;
    if ( v12 >= 0 )
    {
      sub_180113C98(a1 + 968, &v20);
      v11 = 0;
    }
    else
    {
      sub_18004BD84(
        (int)retaddr,
        578,
        (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
        v12);
    }
  }
  else
  {
    if ( v5 )
      LeaveCriticalSection(v5);
    v11 = -2147024809;
  }
  sub_18000F708((__int64 *)&v14);
  return v11;
}
