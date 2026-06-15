/*
 * XREFs of sub_18010B558 @ 0x18010B558
 * Callers:
 *     sub_18010BA60 @ 0x18010BA60 (sub_18010BA60.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB330 @ 0x1800BB330 (sub_1800BB330.c)
 *     sub_18010AB24 @ 0x18010AB24 (sub_18010AB24.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010B558(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // edx
  _QWORD *v13; // rbx
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // rax
  _QWORD *v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  _QWORD *v20; // [rsp+60h] [rbp-10h] BYREF
  __int64 v21; // [rsp+68h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]
  int v23; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+48h] BYREF

  v6 = *a1;
  if ( !v6 )
    sub_1800BB330(
      (int)retaddr,
      249,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      -2005139196);
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v6 + 128LL))(v6, &v18);
  v11 = v7;
  if ( v7 < 0 )
  {
    v12 = 252;
LABEL_10:
    v14 = v7;
    goto LABEL_11;
  }
  v13 = v18;
  if ( !v18 )
  {
    v11 = -2005139195;
    v14 = -2005139195;
    v12 = 253;
LABEL_11:
    sub_18004BD84(
      (int)retaddr,
      v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      v14);
    goto LABEL_15;
  }
  if ( (a1[6] & 0x800000) != 0 )
  {
    v15 = *v18;
    v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 40LL))(*a1);
    v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(v15 + 64))(v13, v16, a2, a3);
    v11 = v7;
    if ( v7 < 0 )
    {
      v12 = 258;
      goto LABEL_10;
    }
  }
  if ( (unsigned int)CallbackContext > 4 )
  {
    v23 = *((_DWORD *)a1 + 13);
    v19 = a3;
    v24 = a2;
    v20 = a1 + 2;
    v21 = a1[5];
    sub_18010AB24(
      v8,
      byte_1801694F7,
      v9,
      v10,
      (__int64)&v21,
      (__int64 *)&v20,
      (__int64)&v24,
      (__int64)&v19,
      (__int64)&v23);
  }
  v11 = 0;
LABEL_15:
  sub_18000F708((__int64 *)&v18);
  return v11;
}
