/*
 * XREFs of sub_1801215D0 @ 0x1801215D0
 * Callers:
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18005E08C (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     sub_18006725C @ 0x18006725C (sub_18006725C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180121DC0 @ 0x180121DC0 (sub_180121DC0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801215D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE v9[56]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+58h] [rbp-60h]
  _BYTE v11[64]; // [rsp+60h] [rbp-58h] BYREF

  v4 = sub_18006725C((__int64)v11, a2);
  v5 = *(_QWORD *)(v4 + 56);
  if ( v5 == v4 || (v6 = *(_QWORD *)(a1 + 56), v6 == a1) )
  {
    v10 = 0LL;
    sub_180121DC0(v9, v4);
    sub_180121DC0(v4, a1);
    sub_180121DC0(a1, v9);
    unknown_libname_207((__int64)v9, v7);
  }
  else
  {
    *(_QWORD *)(v4 + 56) = v6;
    *(_QWORD *)(a1 + 56) = v5;
  }
  unknown_libname_207((__int64)v11, v3);
  return a1;
}
