/*
 * XREFs of sub_18010D340 @ 0x18010D340
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010C578 @ 0x18010C578 (sub_18010C578.c)
 *     sub_18010CCB0 @ 0x18010CCB0 (sub_18010CCB0.c)
 *     sub_18010E270 @ 0x18010E270 (sub_18010E270.c)
 *     sub_18010E7A8 @ 0x18010E7A8 (sub_18010E7A8.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall sub_18010D340(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int v6; // ebx
  int v7; // edx
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  int v11; // r9d
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h]
  char v22; // [rsp+48h] [rbp-40h]
  __int128 v23; // [rsp+50h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  lpCriticalSection = v5;
  sub_180048790(&v18, a3);
  v17 = 0LL;
  v6 = (**v18)(v18, &unk_18015E758, &v17);
  if ( v6 < 0 )
  {
    v7 = 231;
LABEL_3:
    sub_18004BD84(
      (int)retaddr,
      v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      v6);
    sub_18000F708(&v17);
    sub_18000F708((__int64 *)&v18);
    if ( v5 )
      LeaveCriticalSection(v5);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 48LL))(v17, &v23);
  if ( v6 < 0 )
  {
    v7 = 234;
    goto LABEL_3;
  }
  v10 = (_QWORD *)(a1 + 136);
  sub_18010CCB0(v9, (__int64)&v23, a1 + 136);
  sub_18010C578((__int64 **)(a1 + 160), (__int64)&v20, &v23, v11);
  v12 = v20;
  sub_180048790(&v20, *(_QWORD *)(v20 + 48));
  v21 = *(_QWORD *)(v12 + 56);
  v22 = *(_BYTE *)(v12 + 64);
  if ( v21 && (v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 104LL))(v17), v14 = v13, v13 < 0) )
  {
    sub_18004BD84(
      (int)retaddr,
      244,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      v13);
    sub_18000F708(&v20);
    sub_18000F708(&v17);
    sub_18000F708((__int64 *)&v18);
    if ( v5 )
    {
      LeaveCriticalSection(v5);
      lpCriticalSection = 0LL;
    }
    return v14;
  }
  else
  {
    sub_18010E7A8(a1 + 160, &v23);
    sub_18000F708(&v20);
    v15 = v23 - *v10;
    if ( (_QWORD)v23 == *v10 )
      v15 = *((_QWORD *)&v23 + 1) - *(_QWORD *)(a1 + 144);
    if ( !v15 )
    {
      *(_OWORD *)v10 = xmmword_18015B730;
      *(_DWORD *)(a1 + 176) = 0;
      v16 = sub_18010E270(a1);
      if ( v16 < 0 )
        sub_18006D26C(
          (int)retaddr,
          259,
          (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          v16);
    }
    sub_18000F708(&v17);
    sub_18000F708((__int64 *)&v18);
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
}
