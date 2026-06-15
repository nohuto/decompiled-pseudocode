/*
 * XREFs of sub_18006FA04 @ 0x18006FA04
 * Callers:
 *     sub_1800701E0 @ 0x1800701E0 (sub_1800701E0.c)
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_18006F4B0 @ 0x18006F4B0 (sub_18006F4B0.c)
 *     sub_18006FB4C @ 0x18006FB4C (sub_18006FB4C.c)
 *     sub_18006FBBC @ 0x18006FBBC (sub_18006FBBC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18006FA04(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 *i; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  _BYTE v12[64]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v13[56]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD *v14; // [rsp+98h] [rbp+1Fh]
  _QWORD *v15; // [rsp+F0h] [rbp+77h]

  for ( i = a2; i != a3; ++i )
  {
    v8 = *i;
    sub_18006FBBC(v12, a4);
    v14 = 0LL;
    v15 = sub_180055F40(0x48uLL);
    sub_18006F4B0(v15);
    v14 = v15;
    unknown_libname_207((__int64)v12, v9);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 352LL))(v8, v13);
  }
  sub_18006FB4C(a1, a4);
  unknown_libname_207(a4, v10);
  return a1;
}
