/*
 * XREFs of sub_180103164 @ 0x180103164
 * Callers:
 *     sub_1800D01A8 @ 0x1800D01A8 (sub_1800D01A8.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_1800DBA24 @ 0x1800DBA24 (sub_1800DBA24.c)
 *     sub_1801022A4 @ 0x1801022A4 (sub_1801022A4.c)
 *     sub_1801029A0 @ 0x1801029A0 (sub_1801029A0.c)
 *     sub_180102C80 @ 0x180102C80 (sub_180102C80.c)
 *     sub_180116554 @ 0x180116554 (sub_180116554.c)
 *     sub_1801168D0 @ 0x1801168D0 (sub_1801168D0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180103164(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rbx
  __int128 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v24[24]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v25[23]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v26[24]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v27[4]; // [rsp+200h] [rbp+100h] BYREF

  v26[23] = a2;
  v21 = a3;
  sub_180116554(v27);
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 64LL))(*a3, v27);
  v19 = 0LL;
  v6 = a1[113];
  if ( v6 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
    v6 = a1[113];
  }
  *(_QWORD *)&v19 = a1[112];
  *((_QWORD *)&v19 + 1) = v6;
  v20 = 0LL;
  v7 = a3[1];
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    v7 = a3[1];
  }
  *(_QWORD *)&v20 = *a3;
  *((_QWORD *)&v20 + 1) = v7;
  v8 = sub_180102C80((__int64)v23, 1LL, &v20, &v19, a1[114]);
  v9 = sub_1801022A4((__int64)(a1 + 110), a1[110], (__int64)a2, v8);
  sub_1801029A0(a1 + 110, (__int64)&v22, 0, v9 + 4, v9);
  sub_1800DBA24(v26);
  sub_1800DBA24(v25);
  sub_1801168D0(v24);
  v10 = v22;
  unknown_libname_101(v27);
  v11 = a2[3];
  if ( v11 >= 0x10 )
  {
    v12 = *a2;
    v13 = v11 + 1;
    if ( v13 >= 0x1000 )
    {
      v14 = v13 + 39;
      v15 = *(_QWORD *)(v12 - 8);
      v16 = v12 - v15;
      if ( (unsigned __int64)(v16 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v16, v14);
        JUMPOUT(0x180103353LL);
      }
      v12 = v15;
    }
    j_j__o_free(v12);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  v17 = (volatile signed __int32 *)a3[1];
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return v10 + 64;
}
