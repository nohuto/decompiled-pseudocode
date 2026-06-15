/*
 * XREFs of sub_1800E0770 @ 0x1800E0770
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0770(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned int v14; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v17; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v18[16]; // [rsp+78h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]

  sub_1800462E4(&v17, a1);
  v8 = sub_180008448(v7, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v8[1], v9, (struct _TP_TIMER *)L"AudioServerSetChannelVolume");
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 176LL))(a1, a2, v10, a4);
  v14 = v11;
  if ( v11 >= 0 )
    v14 = 0;
  else
    sub_18004BD84((int)retaddr, 3483, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v11);
  sub_18000F690((__int64)pv, v12, v13);
  EtwEventActivityIdControl(4LL, v18);
  return v14;
}
